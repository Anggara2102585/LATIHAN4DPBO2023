""" Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal Latihan4 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. """

class Course:
    def __init__(self, nama_matkul):
        self.__nama_matkul = nama_matkul

    # Getter
    def getNamaMatkul(self):
        return self.__nama_matkul

    # Setter
    def setNamaMatkul(self, value):
        self.__nama_matkul = value
