# Pertemuan 5

<h1>Tinkercad relay + lampu</h1>

<img src="Gambar-bentuk-dan-Simbol-relay.jpg">

## Prinsip Kerja Relay

<p>Apa itu relay?</p>
<p>Relay adalah sakelar listrik yang menggunakan elektromagnetisme untuk mengubah rangsangan listrik kecil menjadi arus yang lebih besar.</p>
<br/>
<p>Pada dasarnya, Relay terdiri dari 4 komponen dasar  yaitu :</p>

<ul>
	<li>Electromagnet (Coil)</li>
	<li>Armature</li>
	<li>Switch Contact Point (Saklar)</li>
	<li>Spring</li>
</ul>

<p>Berikut ini merupakan gambar dari bagian-bagian Relay :</p>

<img src="Struktur-Relay.jpg">

<p>Kontak Poin (Contact Point) Relay terdiri dari 2 jenis yaitu :</p>
<ul>
	<li>Normally Close (NC) yaitu kondisi awal sebelum diaktifkan akan selalu berada di posisi CLOSE (tertutup)</li>
	<li>Normally Open (NO) yaitu kondisi awal sebelum diaktifkan akan selalu berada di posisi OPEN (terbuka)</li>
</ul>

<p>Berdasarkan gambar diatas, sebuah Besi (Iron Core) yang dililit oleh sebuah kumparan Coil yang berfungsi untuk mengendalikan Besi tersebut. Apabila Kumparan Coil diberikan arus listrik, maka akan timbul gaya Elektromagnet yang kemudian menarik Armature untuk berpindah dari Posisi sebelumnya (NC) ke posisi baru (NO) sehingga menjadi Saklar yang dapat menghantarkan arus listrik di posisi barunya (NO). Posisi dimana Armature tersebut berada sebelumnya (NC) akan menjadi OPEN atau tidak terhubung. Pada saat tidak dialiri arus listrik, Armature akan kembali lagi ke posisi Awal (NC). Coil yang digunakan oleh Relay untuk menarik Contact Poin ke Posisi Close pada umumnya hanya membutuhkan arus listrik yang relatif kecil.</p>

<h3>Arti Pole dan Throw pada Relay</h3>

<p>Karena Relay merupakan salah satu jenis dari Saklar, maka istilah Pole dan Throw yang dipakai dalam Saklar juga berlaku pada Relay. Berikut ini adalah penjelasan singkat mengenai Istilah Pole and Throw :</p>

<ul>
	<li><b>Pole :</b> Banyaknya Kontak (Contact) yang dimiliki oleh sebuah relay</li>
	<li><b>Throw :</b> Banyaknya kondisi yang dimiliki oleh sebuah Kontak (Contact)</li>
</ul>

<p>Berdasarkan penggolongan jumlah Pole dan Throw-nya sebuah relay, maka relay dapat digolongkan menjadi :</p>

<ul>
	<li>Single Pole Single Throw (SPST) : Relay golongan ini memiliki 4 Terminal, 2 Terminal untuk Saklar dan 2 Terminalnya lagi untuk Coil.</li>
	<li>Single Pole Double Throw (SPDT) : Relay golongan ini memiliki 5 Terminal, 3 Terminal untuk Saklar dan 2 Terminalnya lagi untuk Coil.</li>
	<li>Double Pole Single Throw (DPST) : Relay golongan ini memiliki 6 Terminal, diantaranya 4 Terminal yang terdiri dari 2 Pasang Terminal Saklar sedangkan 2 Terminal lainnya untuk Coil. Relay DPST dapat dijadikan 2 Saklar yang dikendalikan oleh 1 Coil.</li>
	<li>Double Pole Double Throw (DPDT) : Relay golongan ini memiliki Terminal sebanyak 8 Terminal, diantaranya 6 Terminal yang merupakan 2 pasang Relay SPDT yang dikendalikan oleh 1 (single) Coil. Sedangkan 2 Terminal lainnya untuk Coil.</li>
</ul>

<p>Selain Golongan Relay diatas, terdapat juga Relay-relay yang Pole dan Throw-nya melebihi dari 2 (dua). Misalnya 3PDT (Triple Pole Double Throw) ataupun 4PDT (Four Pole Double Throw) dan lain sebagainya.</p>

<p>Untuk lebih jelas mengenai Penggolongan Relay berdasarkan Jumlah Pole dan Throw, silakan lihat gambar dibawah ini :</p>

<img src="Jenis-Relay.jpg">

<h3>Fungsi-fungsi dan Aplikasi Relay</h3>

<p>Beberapa fungsi Relay yang telah umum diaplikasikan kedalam peralatan Elektronika diantaranya adalah :</p>

<ul>
	<li>Relay digunakan untuk menjalankan Fungsi Logika (Logic Function)</li>
	<li>Relay digunakan untuk memberikan Fungsi penundaan waktu (Time Delay Function)</li>
	<li>Relay digunakan untuk mengendalikan Sirkuit Tegangan tinggi dengan bantuan dari Signal Tegangan rendah.</li>
	<li>Ada juga Relay yang berfungsi untuk melindungi Motor ataupun komponen lainnya dari kelebihan Tegangan ataupun hubung singkat (Short).</li>
</ul>

<h3>Rangkaian relay dan cara kerjanya</h3>

<p>Di bawah ini merupakan contoh rangkaian relay yang menggunakan satu buah transistor sebagai drivernya. Transistor yang digunakan bisa dari jenis NPN maupun PNP. Anda tinggal menyesuaikan pemberian bias tegangannya saja.</p>

<img src="Contoh-rangkaian-relay.jpg">
<img src="npn-driver-relay.png">

<ul>
	<li>Saat basis transistor tidak menerima bias tegangan, maka transistor dalam kondisi Off</li>
	<li>Hambatan pada kolektor – emitor transistor sangat besar. Transistor berperilaku seperti saklar terbuka</li>
	<li>Arus listrik dari Vcc tidak dapat mengalir melewati kumparan relay</li>
	<li>Ketika basis transistor diberikan tegangan bias, maka transistor akan mulai aktif</li>
	<li>Hambatan pada kolektor – emitor transistor menjadi sangat kecil sehingga memungkinkan dilewati oleh arus listrik</li>
	<li>Arus listrik Vcc mengalir melewati kumparan relay dan kolektor – emitor</li>
	<li>Karena kumparan mendapatkan arus listrik, maka akan muncul medan magnet yang akan menarik tuas switch</li>
	<li>Relay akan kembali Off jika tegangan bias basis transistor diputuskan</li>
</ul>

<p>Besar tegangan bias yang dibutuhkan oleh basis transistor cukup keci, sekitar 2V sampai 5V saja. Dengan tegangan bias sekecil itu, transistor dapat menggerakkan relay untuk mengalirkan tegangan yang jauh lebih besar.</p>

<p>Transistor yang digunakan untuk membuat rangkaian relay dapat disesuaikan dengan kapasitas relay yang akan dipakai. Rangkaian diatas dapat difungsikan untuk mengendalikan lampu maupun motor listrik.</p>

<hr>

<h2>Transistor</h2>
<h3>Definisi</h3>
<p>Transistor adalah komponen semikonduktor yang memiliki berbagai macam fungsi seperti sebagai penguat, pengendali, penyearah, osilator, modulator dan lain sebagainya.</p>
<br>
<h3>Jenis-jenis Transistor</h3>
<p>Secara umum, Transistor dapat digolongkan menjadi dua keluarga besar yaitu Transistor Bipolar dan Transistor Efek Medan (Field Effect Transistor). Perbedaan yang paling utama diantara dua pengelompokkan tersebut adalah terletak pada bias Input (atau Output) yang digunakannya. Transistor Bipolar memerlukan arus (current) untuk mengendalikan terminal lainnya sedangkan Field Effect Transistor (FET) hanya menggunakan tegangan saja (tidak memerlukan arus). Pada pengoperasiannya, Transistor Bipolar memerlukan muatan pembawa (carrier) hole dan electron sedangkan FET hanya memerlukan salah satunya.</p>
<img src="jenis-transistor.jpg" />
<ol>
	<li>Transistor Bipolar (BJT)</li>
	<p>Transistor Bipolar adalah Transistor yang struktur dan prinsip kerjanya memerlukan perpindahan muatan pembawanya yaitu electron di kutup negatif untuk mengisi kekurangan electon atau hole di kutub positif.   Bipolar berasal dari kata “bi” yang artinya adalah “dua” dan kata “polar” yang artinya adalah “kutub”. Transistor Bipolar juga sering disebut juga dengan singkatan BJT yang kepanjangannya adalah Bipolar Junction Transistor.</p>
	<p>Jenis-jenis transistor bipolar</p>
	<img src="npn-pnp.jpg">
	<ul>
		<li><b>Transistor NPN</b> adalah transistor bipolar yang menggunakan arus listrik kecil dan tegangan positif pada terminal Basis untuk mengendalikan aliran arus dan tegangan yang lebih besar dari Kolektor ke Emitor.</li>
		<li><b>Transistor PNP</b> adalah transistor bipolar yang menggunakan arus listrik kecil dan tegangan negatif pada terminal Basis untuk mengendalikan aliran arus dan tegangan yang lebih besar dari Emitor ke Kolektor.</li>
	</ul>
	<li>Transistor Efek Medan (FET:Field Effect Transistor)</li>
	<ul>
		<li><b>JFET (Junction Field Effect Transistor)</b> adalah Transistor Efek Medanyang menggunakan persimpangan (junction) p-n bias terbalik sebagai isolator antara Gerbang (Gate) dan Kanalnya. JFET terdiri dari dua jenis yaitu JFET Kanal P (p-channel) dan JFET Kanal N (n-channel). JFET terdiri dari tiga kaki terminal yang masing-masing terminal tersebut diberi nama Gate (G), Drain (D) dan Source (S).</li>
		<li><b>MOSFET (Metal Oxide Semiconductor Field Effect Transistor)</b> adalah Transistor Efek Medan yang menggunakan Isolator (biasanya menggunakan Silicon Dioksida atau SiO2) diantara Gerbang (Gate) dan Kanalnya. MOSFET ini juga terdiri dua jenis konfigurasi yaitu MOSFET Depletion dan MOSFET Enhancement yang masing-masing jenis MOSFET ini juga terbagi menjadi MOSFET Kanal-P (P-channel) dan MOSFET Kanal-N (N-channel). MOSFET terdiri dari tiga kaki terminal yaitu Gate (G), Drain (D) dan Source (S).</li>
		<li><b>UJT (Uni Junction Transistor)</b> adalah jenis Transistor yang digolongkan sebagai Field Effect Transistor (FET) karena pengoperasiannya juga menggunakan medan listrik atau tegangan sebagai pengendalinya. Berbeda dengan jenis FET lainnya, UJT mememiliki dua terminal Basis (B1 dan B2) dan 1 terminal Emitor. UJT digunakan khusus sebagai pengendali (switch) dan tidak dapat dipergunakan sebagai penguat seperti jenis transistor lainnya.</li>
	</ul>
</ol>
<hr>

<h2>Diode</h2>
<h3>Definisi</h3>

<hr>
<h4>Sekarang yuk coba simulasi rangkaian diatas dengan tinkercad :</h4>
<a href="https://www.tinkercad.com/">Gabung Tinkercad</a>
<hr>
<p>Referensi :</p>
<a href="https://teknikelektronika.com/pengertian-relay-fungsi-relay/">teknikelektronika.com/pengertian-relay-fungsi-relay</a>
<br>
<a href="https://www.ruangteknisi.com/rangkaian-relay-sederhana/">www.ruangteknisi.com/rangkaian-relay-sederhana/</a>
<br>
<a href="https://amperite.com/blog/relays/">www.amperite.com/blog/relays/</a>
<br>
<a href="https://teknikelektronika.com/pengertian-transistor-jenis-jenis-transistor/">www.teknikelektronika.com/pengertian-transistor-jenis-jenis-transistor/</a>
<br>
<a href="https://circuitglobe.com/transistor.html">www.circuitglobe.com/transistor.html</a>