/* Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal Latihan4 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include <iostream>
#include <string>
#include <list>
#include "Mahasiswa.cpp"
#include "Dosen.cpp"
#include "Prodi.cpp"

using namespace std;

int main () {

    // MAHASISWA
    // =========

    // Deklarasi list
    list<Mahasiswa*> listMhs;

    // Mengisi list
    listMhs.push_back(new Mahasiswa("11234", "MhsSatu", "L", "FPMIPA"));
    listMhs.push_back(new Mahasiswa("21234", "MhsDua", "P", "FPMIPA"));

    // Print isi list
    cout << "=========\n";
    cout << "Mahasiswa\n";
    for (auto mhs : listMhs) {
        cout << "------------------------------\n";
        cout << "NIM          : " << mhs->getNim() << endl;
        cout << "Nama         : " << mhs->getNama() << endl;
        cout << "Jenis Kelamin: " << mhs->getJenisKelamin() << endl;
        cout << "Fakultas     : " << mhs->getFakultas() << endl;
    }

    // DOSEN
    // =====

    // Deklarasi list
    list<Dosen*> listDosen;

    // Mengisi list
    listDosen.push_back(new Dosen("1234567891", "DosenSatu", "L", "FPMIPA", "S2", "IoT"));
    listDosen.push_back(new Dosen("1234567892", "DosenDua", "P", "FPMIPA", "S2", "DataMining"));

    // Print isi list
    cout << "=====\n";
    cout << "Dosen\n";
    for (auto dosen : listDosen) {
        cout << "------------------------------\n";
        cout << "NIP           : " << dosen->getNip() << endl;
        cout << "Nama          : " << dosen->getNama() << endl;
        cout << "Jenis Kelamin : " << dosen->getJenisKelamin() << endl;
        cout << "Fakultas      : " << dosen->getFakultas() << endl;
        cout << "Pend. Terakhir: " << dosen->getPendTerakhir() << endl;
        cout << "Keahlian      : " << dosen->getKeahlian() << endl;
    }
        
    // PRODI
    // =====

    // Isi data
    Prodi ilkom;
    ilkom.setNamaProdi("Ilmu Komputer");
    ilkom.setKode("IK");
    list<Course*> courses;
    courses.push_back(new Course("Alpro1"));
    courses.push_back(new Course("Alpro2"));
    courses.push_back(new Course("Strukdat"));
    courses.push_back(new Course("DPBO"));
    ilkom.setCourses(courses);

    // Print data
    cout << "=====\n";
    cout << "Prodi\n";
    cout << "------------------------------\n";
    cout << "Nama Prodi: " << ilkom.getNamaProdi() << endl;
    cout << "Kode Prodi: " << ilkom.getKode() << endl;
    cout << "Course:\n";
    for (auto course : ilkom.getCourses()) {
        cout << " - " << course->getNamaMatkul() << endl;
    }

}