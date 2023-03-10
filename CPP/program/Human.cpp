/* Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal Latihan4 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

// Untuk menghindari class Human terdefinisi kembali (Karena dipanggil Mahasiswa dan Dosen)
#ifndef Human_cpp
#define Human_cpp

#include <string>

using namespace std;

class Human {

private:
    string nik;
    string nama;
    string jenis_kelamin;

public:
    Human () {
    }

    Human (string nama, string jenis_kelamin) {
        this->nama = nama;
        this->jenis_kelamin = jenis_kelamin;
    }

    Human (string nik, string nama, string jenis_kelamin) {
        this->nik = nik;
        this->nama = nama;
        this->jenis_kelamin = jenis_kelamin;
    }

    // Getter
    string getNik () {
        return nik;
    }
    string getNama () {
        return nama;
    }
    string getJenisKelamin () {
        return jenis_kelamin;
    }
    // Setter
    void setNik (string nik) {
        this->nik = nik;
    }
    void setNama (string nama) {
        this->nama = nama;
    }
    void setJenisKelamin (string jenis_kelamin) {
        this->jenis_kelamin = jenis_kelamin;
    }

};

#endif