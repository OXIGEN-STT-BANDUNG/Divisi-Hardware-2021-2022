# Pertemuan 7

## Servo (Motor Servo)

<h3><b>Definisi</b></h3>
<blockquote>Motor servo merupakan motor listrik dengan sistem closed loop yang digunakan untuk mengendalikan kecepatan, akselerasi dan posisi akhir dari sebuah motor listrik dengan keakuratan yang tinggi.</blockquote>
<br>
<img src="servosize.jpg" alt="size of servo">
<br>
<h3><b>Bagian-bagian (Konstruksi)</b></h3>
<img src="servoin.jpg" alt="konstruksi-servo">
<br>
<p>Motor servo terdiri dari tiga bagian utama, yaitu: motor, sistem kontrol dan potensiometer/encoder yang terhubung dengan satu set roda gigi ke poros output. Potentiometer atau encoder ini lah yang berfungsi sebagai sensor yang memberikan sinyal umpan balik (feedback) ke sistem kontrol apakah posisi targetnya sudah benar atau belum. Encoder biasanya digunakan pada motor servo industri. Sedangkan potentiometer biasanya digunakan pada aplikasi yang lebih sederhana seperti mobil remote kontrol.</p>
<p>Potentiometer ini terdiri dari tiga kabel dengan 2 kabel untuk power dan 1 kabel untuk kabel sinyal. Motor akan menggerakkan roda gigi untuk memutar potensiometer dan poros output secara bersamaan. Potensiometer lah yang akan mengendalikan posisi sudut motor servo dengan pemberian sinyal ke dalam sistem kontrol.  Jika posisi targetnya sudah benar, maka ia akan menghentikan motor servo. Sebaliknya, Jika sistem kontrol mendeteksi bahwa sudut belum tepat, maka ia akan mengubah motor servo ke arah yang benar sampai posisi sudutnya benar. Kelebihan inilah yang tidak ditemukan pada motor biasa. Motor servo biasanya digunakan untuk mengendalikan posisi sudut antara 0 dan 180 derajat.</p>
<br>
<h3><b>Cara Kerja</b></h3>
<img src="servopulse.jpg" alt="pulsasi servo">
<p>Motor servo dikendalikan dengan sinyal PWM dari encoder/potentiometer. Lebar sinyal (pulsa) yang diberikan inilah yang akan menentukan posisi sudut putaran dari poros motor servo. Sebagai contoh, lebar sinyal dengan waktu 1,5 ms (mili second) akan memutar poros motor servo ke posisi sudut 90⁰. Bila sinyal lebih pendek dari 1,5 ms maka akan berputar ke arah posisi 0⁰ atau ke kiri (berlawanan dengan arah jarum jam), sedangkan bila sinyal yang diberikan lebih lama dari 1,5 ms maka poros motor servo akan berputar ke arah posisi 180⁰ atau ke kanan (searah jarum jam).</p>
<br>
<img src="openclosed.jpg" alt="Skema-open-closed-servo">
<p>Ketika sinyal PWM telah diberikan, maka poros motor servo akan bergerak ke posisi yang telah ditargetkan dan berhenti pada posisi tersebut serta akan tetap bertahan pada posisi tersebut. Jika ada kekuatan eksternal yang mencoba memutar atau mengubah posisi tersebut, maka sistem closed loop dari motor servo tersebut akan bekerja dengan mencoba menahan atau melawan kekuatan eksternal tersebut dengan kekuatan internal dari motor servo itu sendiri. Namun motor servo tidak akan mempertahankan posisinya untuk selamanya, sinyal PWM harus diulang setiap 20 ms (mili second)  agar posisi poros motor servo tetap bertahan pada posisinya. Berikut ini adalah ilustrasi dari perbedaan open loop system vs closed loop system dimana motor servo mengandalkan closed loop system dengan sinyal umpan balik (feedback) sehingga posisi yang ditargetkan akan tergapai secara otomatis</p>
<fieldset>
	<legend>Video Animasi Penjelasan Servo</legend>
	<a href="https://youtu.be/ditS0a28Sko">Lihat Disini</a>
</fieldset>


<br>
<br>
<hr>
<p>Referensi:</p>
<br>
<a href="https://www.insinyoer.com/cara-kerja-motor-servo/" target="_blank">www.insinyoer.com/cara-kerja-motor-servo/</a>
<br>
<a href="" target="_blank"></a>
<br>
<a href="" target="_blank"></a>
<br>
<a href="" target="_blank"></a>