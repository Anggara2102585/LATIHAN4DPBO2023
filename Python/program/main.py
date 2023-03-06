""" Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal Latihan4 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. """

from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Prodi import Prodi
from Course import Course

# MAHASISWA
# =========

# Deklarasi list
listMhs = []

# Mengisi list
mhs = Mahasiswa()
mhs.setNim("11234")
mhs.setNama("MhsSatu")
mhs.setJenisKelamin("L")
mhs.setFakultas("FPMIPA")
listMhs.append(mhs)

mhs = Mahasiswa()
mhs.setNim("21234")
mhs.setNama("MhsDua")
mhs.setJenisKelamin("P")
mhs.setFakultas("FPMIPA")
listMhs.append(mhs)

# Print isi list
print("=========")
print("Mahasiswa")
for mhs in listMhs:
    print("------------------------------")
    print("NIM          : ", mhs.getNim())
    print("Nama         : ", mhs.getNama())
    print("Jenis Kelamin: ", mhs.getJenisKelamin())
    print("Fakultas     : ", mhs.getFakultas())

# DOSEN
# =====

# Deklarasi list
listDosen = []

# Mengisi list
dosen = Dosen()
dosen.setNip("1234567891")
dosen.setNama("DosenSatu")
dosen.setJenisKelamin("L")
dosen.setFakultas("FPMIPA")
dosen.setPendTerakhir("S2")
dosen.setKeahlian("IoT")
listDosen.append(dosen)

dosen = Dosen()
dosen.setNip("1234567892")
dosen.setNama("DosenDua")
dosen.setJenisKelamin("P")
dosen.setFakultas("FPMIPA")
dosen.setPendTerakhir("S2")
dosen.setKeahlian("DataMining")
listDosen.append(dosen)

# Print isi list
print("=====")
print("Dosen")
for dosen in listDosen:
    print("------------------------------")
    print("NIP           : ", dosen.getNip())
    print("Nama          : ", dosen.getNama())
    print("Jenis Kelamin : ", dosen.getJenisKelamin())
    print("Fakultas      : ", dosen.getFakultas())
    print("Pend. Terakhir: ", dosen.getPendTerakhir())
    print("Keahlian      : ", dosen.getKeahlian())
    
# PRODI
# =====

# Isi data
ilkom = Prodi()
ilkom.setNamaProdi("Ilmu Komputer")
ilkom.setKode("IK")
ilkom.setCourse([Course("Alpro1"), Course("Alpro2"), Course("Strukdat"), Course("DPBO")])

# Print data
print("=====")
print("Prodi")
print("------------------------------")
print("Nama Prodi: ", ilkom.getNamaProdi())
print("Kode Prodi: ", ilkom.getKode())
print("Course:")
for e in ilkom.getCourse():
    print(" - ", e.getNamaMatkul())