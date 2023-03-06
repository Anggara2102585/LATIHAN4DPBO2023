""" Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal Latihan4 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. """

from Human import Human

class SivitasAkademik(Human):
    def __init__(self):
        self.__asal_universitas = ""
        self.__email_edu = ""

    # Getter
    def getAsalUniversitas(self):
        return self.__asal_universitas
    def getEmailEdu(self):
        return self.__email_edu

    # Setter
    def setAsalUniversitas(self, value):
        self.__asal_universitas = value
    def setEmailEdu(self, value):
        self.__email_edu = value
