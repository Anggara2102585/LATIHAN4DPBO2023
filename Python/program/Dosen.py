""" Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal Latihan4 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. """

from SivitasAkademik import SivitasAkademik

class Dosen(SivitasAkademik):
    def __init__(self):
        self.__nip = ""
        self.__fakultas = ""
        self.__pend_terakhir = ""
        self.__keahlian = ""

    # Getter
    def getNip(self):
        return self.__nip
    def getFakultas(self):
        return self.__fakultas
    def getPendTerakhir(self):
        return self.__pend_terakhir
    def getKeahlian(self):
        return self.__keahlian

    # Setter
    def setNip(self, value):
        self.__nip = value
    def setFakultas(self, value):
        self.__fakultas = value
    def setPendTerakhir(self, value):
        self.__pend_terakhir = value
    def setKeahlian(self, value):
        self.__keahlian = value
