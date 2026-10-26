#include <iostream>
#include <string> // Ditambahkan agar bisa menggunakan tipe data std::string untuk literal teks

int main() {
    // Menggunakan deklarasi spesifik agar tidak perlu menulis std:: berulang kali
    using std::cout;
    using std::endl;

    // =========================================================================
    // DOKUMENTASI & CONTOH KONSTANTA LITERAL DALAM C++
    // =========================================================================

    // 1. Literal Integer (Bilangan Bulat)
    // Nilai mentah berupa angka bulat positif atau negatif tanpa desimal.
    cout << "1. Literal Integer: " << 100 << endl;


    // 2. Literal Floating-Point (Bilangan Desimal/Pecahan)
    // Nilai mentah berupa angka yang menggunakan titik (.) sebagai pemisah desimal.
    cout << "2. Literal Floating-Point: " << 3.4159 << endl;


    // 3. Literal Character (Karakter Tunggal)
    // Nilai mentah berupa SATU karakter saja. Wajib diapit tanda kutip tunggal (' ').
    cout << "3. Literal Character: " << 'a' << endl;


    // 4. Literal String (Teks/Kalimat)
    // Nilai mentah berupa kumpulan karakter atau kalimat. Wajib diapit tanda kutip dua (" ").
    cout << "4. Literal String: " << "arfy nizwa pace aldi wisnu arep" << endl;


    // 5. Literal Boolean (Logika Benar/Salah)
    // Hanya memiliki dua nilai mentah: true (benar) atau false (salah).
    // Secara standar, C++ akan mencetak true sebagai 1 dan false sebagai 0 di layar.
    cout << "5a. Literal Boolean (true): " << true << endl;
    cout << "5b. Literal Boolean (false): " << false << endl;


    // 6. Literal String dengan Escape Sequence (\n)
    // Karakter '\n' di dalam string adalah literal khusus yang berfungsi untuk 
    // memindah cetakan teks ke baris baru (mirip seperti menekan tombol Enter).
    cout << "6. Escape Sequence: " << "arfy\npemuladaspro" << endl;


    // 7. Literal nullptr (Pointer Kosong)
    // Literal khusus sejak C++11 untuk merepresentasikan alamat memori yang kosong/tidak sah.
    // Jika dicetak langsung menggunakan cout, nilainya akan muncul sebagai alamat kosong/angka 0.
    cout << "7. Literal nullptr: " << nullptr << endl;


    // 8. Literal Integer untuk Exit Code
    // Angka 0 di bawah ini adalah literal integer yang digunakan untuk 
    // memberi tahu sistem operasi bahwa program telah selesai dengan sukses.
    return 0;
}
