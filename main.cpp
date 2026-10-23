#include <iostream>
#include <string>

struct Siswa {
	std::string nama;
	float nilaiAkhir, nilaiTugas, nilaiUts, nilaiUas;
    	char grade;
};

int main() {
	Siswa daftarSiswa[59];
	
	
	std::cout << "Masukkan Nama Siswa";
	std::cin >> daftarSiswa[0].nama ;
	std::cout << "Masukkan Nilai Tugas";
	std::cin >> daftarSiswa[0].nilaiTugas ;
	std::cout << daftarSiswa[0].nama;
	std::cout << daftarSiswa[0].nilaiTugas;
}