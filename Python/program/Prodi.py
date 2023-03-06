""" Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal Latihan4 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. """

class Prodi:
    def __init__(self):
        self.__nama_prodi = ""
        self.__kode = ""
        self.__course = []

    # Getter
    def getNamaProdi(self):
        return self.__nama_prodi
    def getKode(self):
        return self.__kode
    def getCourse(self):
        return self.__course

    # Setter
    def setNamaProdi(self, value):
        self.__nama_prodi = value
    def setKode(self, value):
        self.__kode = value
    def setCourse(self, value):
        self.__course.extend(value)
