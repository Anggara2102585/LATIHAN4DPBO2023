""" Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal Latihan4 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. """

class Human:
    def __init__(self):
        self.__nik = ""
        self.__nama = ""
        self.__jenis_kelamin = ""

    # Getter
    def getNik(self):
        return self.__nik
    def getNama(self):
        return self.__nama
    def getJenisKelamin(self):
        return self.__jenis_kelamin

    # Setter
    def setNik(self, value):
        self.__nik = value
    def setNama(self, value):
        self.__nama = value
    def setJenisKelamin(self, value):
        self.__jenis_kelamin = value
