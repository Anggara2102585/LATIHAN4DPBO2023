/* Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal Latihan4 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include <string>
#include <list>
#include "Course.cpp"

using namespace std;

class Prodi {

private:
    string nama_prodi;
    string kode;
    list<Course*> courses;
    
public:
    Prodi () {
    }

    Prodi (string nama_prodi, string kode, list<Course*> courses) {
        this->nama_prodi = nama_prodi;
        this->kode = kode;
        this->courses = courses;
    }

    ~Prodi () {
        for (auto course : courses) {
            delete course;
        }
    }

    // Getter
    string getNamaProdi () {
        return nama_prodi;
    }
    string getKode () {
        return kode;
    }
    list<Course*> getCourses () {
        return courses;
    }
    
    // Setter
    void setNamaProdi (string nama_prodi) {
        this->nama_prodi = nama_prodi;
    }
    void setKode (string kode) {
        this->kode = kode;
    }
    void setCourses (list<Course*> courses) {
        this->courses = courses;
    }

    void addCourse (Course* course) {
        courses.push_back(course);
    }

};
