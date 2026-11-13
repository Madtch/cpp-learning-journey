#include <iostream>
// dipakai untuk membuat program yang memerlukan input output

// using std::cout; // Hanya memanggil cout
// using std::endl; // Hanya memanggil endl
// ini juga boleh kita panggil fungsi yang kita butuh aja dalam program tersebut

int main() { //int disini berarti integer, tapi di sini dia bukan sedang mendeklarasikan tipe data
	std::cout << "Hello World!" << std::endl;
	// std, std di sini digunakan untuk memenuhi standar industri.
	// cout untuk output, dan cin untuk input. sementara endl untuk membuat garis baru
	// titik koma sangat penting di c++ untuk memberhentikan statement yang ada di c++
	return 0;
	// return 0 disini memastikan kalau program berhasil tanpa error, kalau 1 kebalikannya. cuma ini gabisa asal, kita sendiri harus memastikan program bener atau tidak

}