#include <iostream>
#include <string>

// =================================================================
// DOKUMENTASI VARIABEL DAN TIPE DATA DALAM C++
// =================================================================
// Variabel adalah wadah di memori untuk menyimpan nilai data.
// Setiap variabel memiliki tipe data yang menentukan jenis nilai 
// dan ukuran memori yang digunakannya.
// =================================================================

int main() {
    // -------------------------------------------------------------
    // 1. Tipe Data Dasar (Primitive Data Types)
    // -------------------------------------------------------------

    // float: Menyimpan bilangan desimal (presisi tunggal / single precision).
    // Ukuran: ~4 byte.
    float pi = 3.14;

    // char: Menyimpan satu karakter tunggal.
    // Ditulis menggunakan tanda petik tunggal ('').
    // Ukuran: 1 byte.
    char karakter = 'a';

    // bool: Menyimpan nilai logika (boolean), yaitu true (1) atau false (0).
    // Ukuran: 1 byte.
    bool logika = false;

    // double: Menyimpan bilangan desimal presisi ganda (double precision).
    // Lebih akurat dibandingkan float untuk nilai desimal yang panjang.
    // Ukuran: ~8 byte.
    double nilaipitinggi = 3.141592653;


    // -------------------------------------------------------------
    // 2. Tipe Data Komposit / Non-Primitive
    // -------------------------------------------------------------

    // std::string: Menyimpan kumpulan karakter (teks / kalimat).
    // Memerlukan header <string> dan ditulis dengan tanda petik ganda ("").
    std::string pesan = "nizwa lagi main valorant";


    // -------------------------------------------------------------
    // 3. Modifier Tipe Data (Unsigned) & Fenomena Underflow/Overflow
    // -------------------------------------------------------------

    // unsigned: Modifier yang membuat tipe data hanya menyimpan nilai positif (>= 0).
    // Nilai negatif tidak diperbolehkan. 

    // CATATAN KHUSUS (Integer Underflow):
    // Jika variabel 'unsigned int' diberi nilai negatif (seperti -30 atau -10),
    // sistem tidak bisa menyimpannya secara langsung. Nilai tersebut akan berputar 
    // (underflow/wrap around) ke rentang nilai maksimum positifnya.
    //
    // Contoh pada sistem 32-bit:
    // Nilai -10 pada 'unsigned int' akan menghasilkan output: 4294967286
    // Nilai -30 pada 'unsigned int' akan menghasilkan output: 4294967196
    unsigned int umur = -30;

    // Menampilkan nilai variabel ke terminal
    std::cout << umur << std::endl;

    return 0;
}