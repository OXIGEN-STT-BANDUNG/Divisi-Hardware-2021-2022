#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <NTPClient.h>
#include <WiFiUdp.h>                

WiFiUDP ntpUDP;
const long utcOffsetInSeconds = 28800;
NTPClient timeClient(ntpUDP, "pool.ntp.org", utcOffsetInSeconds);
unsigned long epochTime = timeClient.getEpochTime();
struct tm *ptm = gmtime ((time_t *)&epochTime);

const char* ssid = "WiFi Name";  
const char* password = "WiFi Password"; 

ESP8266WebServer server(80);

String SendHTML(String TitleWeb,String MessageWeb, String TimeWeb, String DateWeb);
void handle_OnConnect();
void handle_NotFound();

String Title;
String Message;
String formattedTime;
String Date;
int Day;
int Month;
int Year;

void setup() {
  Serial.begin(115200);
  
  Serial.println("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
  delay(1000);
  Serial.print(".");
  } 
  Serial.println("");
  Serial.println("Connected to WiFi");
  Serial.print("IP: ");  Serial.println(WiFi.localIP());

  server.on("/", handle_OnConnect);
  server.onNotFound(handle_NotFound);
  server.begin();
  timeClient.begin();
}
void loop() {
  
  server.handleClient();
  
}

void handle_OnConnect() {

  timeClient.update();
 
  unsigned long epochTime = timeClient.getEpochTime(); 
  String formattedTime = timeClient.getFormattedTime();
  
  struct tm *ptm = gmtime ((time_t *)&epochTime); 

  int monthDay = ptm->tm_mday;
  int currentMonth = ptm->tm_mon+1;
  int currentYear = ptm->tm_year+1900;
 
  formattedTime = timeClient.getFormattedTime(); 
  Date = String(currentYear) + "-" + String(currentMonth) + "-" + String(monthDay);
  Title = "Muhammad Ikhwan Fathulloh"; 
  Message = "Kirim data dari server"; 
  server.send(200, "text/html", SendHTML(Title,Message,formattedTime,Date)); 
}

void handle_NotFound(){
  server.send(404, "text/plain", "Not found");
}

String SendHTML(String TitleWeb,String MessageWeb, String TimeWeb,String DateWeb){
  String ptr = "<!DOCTYPE html> <html>\n";
  ptr +="<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=no\">\n";
  ptr +="<title>ESP8266 OXIGEN Server</title>\n";

  ptr +="</head>\n";
  ptr +="<body>\n";
  ptr +="<div id=\"webpage\">\n";
  ptr +="<h1>ESP8266 OXIGEN Server</h1>\n";

  ptr +="<p>Date: ";
  ptr +=(String)DateWeb;
  ptr +="</p>";
  ptr +="<p>Time: ";
  ptr +=(String)TimeWeb;
  ptr +="</p>";
  ptr +="<p>Title: ";
  ptr +=(int)TitleWeb;
  ptr +="C</p>";
  ptr +="<p>Message: ";
  ptr +=(int)MessageWeb;
  ptr +="%</p>";
  
  ptr +="</div>\n";
  ptr +="</body>\n";
  ptr +="</html>\n";
  return ptr;
}
