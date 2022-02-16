# Pertemuan 4

## Sensor Ultrasonik + Button

### Sensor HC-SR04

<h3><u><b>Definisi</b></u></h3>
<blockquote>HC-SR04 adalah sebuah modul sensor ultrasonik yang biasanya digunakan untuk alat pengukur jarak.
</blockquote>
<br>
<p>Pada HC-SR04 terdapat sepasang transducer ultrasonik yang satu berfungsi sebagai transmitter yang bertugas untuk mengubah sinyal elektrik menjadi sinyal pulsa gelombang suara ultrasonik dengan frekuensi 40KHz, dan satunya berfungsi sebagai receiver yang bertugas untuk menerima sinyal gelombang suara ultrasonik.<p>
<figure>
	<img src="hc-sr04.jpg" alt="hc-sr04">
	<figcaption style="text-align: center;"><center>Gambar fisik Sensor HC-SR04</center></figcaption>
</figure>
<p>Apa itu gelombang ultrasonik? Gelombang suara ultrasonik adalah sebuah gelombang suara dengan frekuensi yang berada diatas batas pendengaran manusia. Seperti yang kita ketahui bahwasannya batas pendengaran manusia berada pada rentang frekuensi 20Hz – 20KHz.</p>
<br>
<h3><u><b>Pin dan Fungsinya</b></u></h3>
<img src="pin-hcsr04.png" alt="pin-pinnya">
<ol>
	<li>VCC = 5V Power Supply. Pin sumber tegangan positif sensor.</li>
	<li>Trig = Trigger/Penyulut. Pin ini yang digunakan untuk membangkitkan sinyal ultrasonik.</li>
	<li>Echo = Receive/Indikator. Pin ini yang digunakan untuk mendeteksi sinyal pantulan ultrasonik.</li>
	<li>GND = Ground/0V Power Supply. Pin sumber tegangan negatif sensor.</li>
</ol>
<br>
<h3><u><b>Cara Kerja</b></u></h3>
<img src="caker-hcsr04.png" alt="cara-kerja">
<p>Sebuah sinyal pulsa dengan durasi setidaknya 10 μS (10 mikrodetik) diterapkan ke pin Trigger. Setelah itu, sensor mentransmisikan gelombang ultrasonik delapan pulsa pada frekuensi 40 KHz. Pola 8-pulsa ini digunakan untuk sebuah penanda sinyal ultrasonik dari modul ini, yang memungkinkan receiver / penerima untuk membedakan pola yang ditransmisikan dari kebisingan ultrasonik sekitar.</p>
<p>Delapan pulsa ultrasonik bergerak melalui udara menjauh dari transmitter / pemancar mengarah ke benda atau obyek yang ada di depannya. Sementara itu pin Echo menjadi HIGH / TINGGI untuk mulai membentuk awal sinyal gema.</p>
<p>Jika tidak ada sinyal ultrasonik yang dipantulkan atau diterima oleh receiver selama rentang 38 mS (mili detik), yang artinya tidak ada obyek atau benda maka sinyal Echo akan Timeout dan kembali menjadi LOW / RENDAH.</p>
<p>Sedangkan jika ada sinyal ultrasonik yang dipantulkan atau diterima oleh receiver, maka saat itu juga sinyal Echo langsung berubah menjadi LOW / RENDAH. Nah, lebar rentang waktu dari sinyal ECHO inilah yang digunakan untuk mengukur jarak antara sensor dengan obyek atau benda.</p>
<p>Dengan menggunakan persamaan jarak – kecepatan – waktu dari gelombang suara yang merambat pada udara, maka bisa dijabarkan sebagai berikut :</p>
<ul>
	<li>Jarak = Kecepatan x Waktu.</li>
	<p>Dimana kecepatan gelombang suara pada udara adalah = 340 m/s = 0.034 cm/μS. Karena jarak tempuh gelombang suara ultrasonik tadi adalah bolak-balik yaitu dari sensor (transmitter) ke obyek dan kembali ke sensor (receiver), maka rumusnya menjadi :</p>
	<li>Jarak (cm) = Waktu (μS) * 0.034 / 2</li>
	<p></p>
</ul>



<br>
<br>
<i>source1: https://eepower.com/resistor-guide/resistor-types/photo-resistor/#</i><br>
<i>source2: https://engineeringlearn.com/what-is-ldr-photoresistor-types-working-application-diagram-symbol-complete-details/</i><br>
<i>source3: https://www.electronics-notes.com/articles/electronic_components/resistors/light-dependent-resistor-ldr.php</i>
