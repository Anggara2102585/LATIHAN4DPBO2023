/* Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal Latihan4 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

// Untuk menghindari class SivitasAkademik terdefinisi kembali (Karena dipanggil Mahasiswa dan Dosen)
#ifndef SivitasAkademik_cpp
#define SivitasAkademik_cpp

#include <string>
#include "Human.cpp"

using namespace std;

class SivitasAkademik : public Human  {
    
private:
    string asal_universitas;
    string email_edu;

public:
    SivitasAkademik () {
    }

    SivitasAkademik (string nama, string jenis_kelamin)
    : Human (nama, jenis_kelamin) {
    }
    
    SivitasAkademik (string nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu)
    : Human (nik, nama, jenis_kelamin) {
        this->asal_universitas = asal_universitas;
        this->email_edu = email_edu;
    }

    // Getter
    string getAsalUniversitas () {
        return asal_universitas;
    }
    string getEmailEdu () {
        return email_edu;
    }
    // Setter
    void setAsalUniversitas (string asal_universitas) {
        this->asal_universitas = asal_universitas;
    }
    void setEmailEdu (string email_edu) {
        this->email_edu = email_edu;
    }
    
};

#endif