/* Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal Latihan4 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include <string>
#include "SivitasAkademik.cpp"

using namespace std;

class Dosen : public SivitasAkademik {

private:
    string nip;
    string fakultas;
    string pend_terakhir;
    string keahlian;

public:
    Dosen () {
    }

    Dosen (string nip, string nama, string jenis_kelamin, string fakultas, string pend_terakhir, string keahlian)
    : SivitasAkademik(nama, jenis_kelamin) {
        this->nip = nip;
        this->fakultas = fakultas;
        this->pend_terakhir = pend_terakhir;
        this->keahlian = keahlian;
    }

    // Getter
    string getNip () {
        return nip;
    }
    string getFakultas () {
        return fakultas;
    }
    string getPendTerakhir () {
        return pend_terakhir;
    }
    string getKeahlian () {
        return keahlian;
    }

    // Setter
    void setNip (string nip) {
        this->nip = nip;
    }
    void setFakultas (string fakultas) {
        this->fakultas = fakultas;
    }
    void setPendTerakhir (string pend_terakhir) {
        this->pend_terakhir = pend_terakhir;
    }
    void setKeahlian (string keahlian) {
        this->keahlian = keahlian;
    }

};
