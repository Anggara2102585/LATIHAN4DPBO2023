# LATIHAN4DPBO2023
 
## Janji

Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal Latihan4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Desain Program

![desain_program](https://user-images.githubusercontent.com/100891594/224453928-110f0258-f352-441f-b647-4e44415a8641.png)

Alasan desain:
* "civitas akademika terdiri dari dosen dan mahasiswa" sehingga kelas Mahasiswa dan Dosen meng-extend kelas SivitasAkademik, dan karena civitas akademika merupakan manusia sehingga kelas SivitasAkademik meng-extend kelas Human.
* Prodi memiliki banyak mata kuliah sehingga kelas Prodi has a (list of)Course.
* Atribut masing-masing kelas mengikuti contoh di soal dan dikurangi atribut yang sudah ada di parent-nya.

## Alur Progarm

Terdapat enam file kelas yang isinya terdapat di bagian desain program kemudian satu buah file main yang menerapkan kelas-kelas tersebut ke list. Isi main:
1. Include file yang diperlukan
2. Deklarasi list Mahasiswa
3. Mengisi list Mahasiswa
4. Menampilkan isi list Mahasiswa menggunakan foreach loop
5. Deklarasi, isi, dan tampilkan list Dosen
6. Deklarasi Prodi
7. Isi atribut Prodi
8. Tampilkan atribut Prodi (menggunakan foreach loop untuk menampilkan Courses)

## Dokumentasi

Output program:

![output_cpp](https://user-images.githubusercontent.com/100891594/224454550-805a14a0-797c-433a-be88-326c112419f0.png)
