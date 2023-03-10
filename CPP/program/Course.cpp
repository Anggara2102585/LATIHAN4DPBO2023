/* Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal Latihan4 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include <string>

using namespace std;

class Course {

private:
    string nama_matkul;

public:
    Course () {
    }

    Course (string nama_matkul) {
        this->nama_matkul = nama_matkul;
    }

    // Getter
    string getNamaMatkul () {
        return this->nama_matkul;
    }
    
    // Setter
    void setNamaMatkul (string nama_matkul) {
        this->nama_matkul = nama_matkul;
    }
};
