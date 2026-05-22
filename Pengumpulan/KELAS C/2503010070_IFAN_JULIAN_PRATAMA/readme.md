soal1.cpp : 
1. Inisialisasi: Menyiapkan wadah penyimpanan (array struct).
2. Input: Pengguna memasukkan data melalui terminal.
3. Proses & Output:
- Menampilkan daftar mahasiswa.
- Menampilkan mahasiswa dengan IPK terbaik.
-Menghitung rata-rata kelas.
-Melakukan filter/pencarian mahasiswa berdasarkan semester yang diinputkan.

soal2.cpp : 
A. Stack (Tumpukan)
Konsep: Menggunakan prinsip LIFO (Last In, First Out), artinya data yang terakhir dimasukkan adalah yang pertama kali dikeluarkan.
Alur:
Program memasukkan 4 buku ("Fisika Dasar", "Kalkulus", "Algoritma", "Jaringan") ke dalam stack.
Buku teratas saat itu adalah "Jaringan".
Program melakukan top-- dua kali, yang berarti melakukan operasi pop (menghapus) dua buku teratas ("Jaringan" dan "Algoritma").
Hasil akhirnya menyisakan dua buku pertama saja.

B. Queue (Antrean)
Konsep: Menggunakan prinsip FIFO (First In, First Out), artinya data yang pertama masuk adalah yang pertama kali keluar.
Alur:
Program memasukkan 3 nama ("Reza", "Mia", "Hendra"). "Reza" berada di posisi depan (front).
front = (front + 1) % 5 melakukan operasi dequeue (menghapus "Reza" dari antrean).
rear = (rear + 1) % 5 dan queueAnggota[rear] = "Putri" melakukan operasi enqueue (menambahkan "Putri" ke posisi belakang antrean).
Hasil akhirnya adalah antrean yang kini berisi "Mia", "Hendra", dan "Putri".
