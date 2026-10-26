#include <iostream>

// =========================================================================
// DOKUMENTASI KATA KUNCI (KEYWORDS) DALAM C++
// Kata kunci adalah kata-kata baku yang sudah dipesan oleh C++ 
// dan memiliki arti khusus bagi kompilator (tidak boleh jadi nama variabel).
// =========================================================================

int main() {
    using std::cout;
    using std::endl;

    // -------------------------------------------------------------------------
    // 1. CONTROL KEYWORDS (Kata Kunci Pengendali Alur)
    // Digunakan untuk percabangan (kondisi) dan perulangan (looping).
    // -------------------------------------------------------------------------
    // - if / else        : Menentukan percabangan kondisi.
    // - while / for / do : Melakukan perulangan kode.
    // - switch / case    : Percabangan multi-kondisi berdasarkan satu nilai.
    // - default          : Jalur alternatif terakhir jika tidak ada case yang cocok.
    
    int angka = 10;
    if (angka > 5) {
        cout << "1. Contoh Control: Angka lebih besar dari 5" << endl;
    }


    // -------------------------------------------------------------------------
    // 2. OPERATOR KEYWORDS (Kata Kunci Operator)
    // Digunakan untuk manajemen memori dinamis dan memeriksa ukuran objek.
    // -------------------------------------------------------------------------
    // - new    : Mengalokasikan (memesan) memori secara dinamis di Heap.
    // - delete : Menghapus/membebaskan memori yang sudah dipesan dengan 'new'.
    // - sizeof : Mengetahui ukuran memori (dalam satuan byte) dari suatu tipe data/variabel.
    
    cout << "2. Contoh Operator (sizeof): Ukuran int adalah " << sizeof(int) << " byte" << endl;


    // -------------------------------------------------------------------------
    // 3. ACCESS SPECIFIER (Penentu Hak Akses)
    // Digunakan dalam Pemrograman Berbasis Objek (OOP/Class) untuk menyembunyikan data.
    // -------------------------------------------------------------------------
    // - public    : Bisa diakses dari mana saja di luar class.
    // - private   : Hanya bisa diakses dari dalam class itu sendiri.
    // - protected : Hanya bisa diakses dari dalam class itu sendiri dan class turunannya.
    
    // (Catatan: Keyword ini hanya valid ditulis di dalam struktur 'class' atau 'struct')


    // -------------------------------------------------------------------------
    // 4. EXCEPTION HANDLING (Penanganan Error/Pengecualian)
    // Digunakan untuk menangkap dan menangani error saat program sedang berjalan (runtime).
    // -------------------------------------------------------------------------
    // - try   : Blok kode yang akan diuji apakah terjadi error/kegagalan atau tidak.
    // - throw : Melemparkan sinyal penanda bahwa terjadi error secara sengaja.
    // - catch : Blok kode yang menangkap dan memproses error dari blok 'try'.
    
    try {
        // Pura-pura terjadi error, lalu kita lempar (throw) kodenya
        // throw 404; 
    } 
    catch (int error_code) {
        // Menangkap error di sini
    }


    // -------------------------------------------------------------------------
    // 5. FUNCTION MODIFIERS (Pengubah Sifat Fungsi)
    // Digunakan untuk memberikan instruksi khusus pada cara kerja sebuah fungsi.
    // -------------------------------------------------------------------------
    // - inline  : Menyarankan kompilator untuk menyalin kode fungsi langsung ke tempat 
    //             ia dipanggil demi mempercepat eksekusi (menghindari overhead panggilan).
    // - virtual : Digunakan pada fungsi di class induk agar bisa ditimpa (override) 
    //             oleh class anak (Polimorfisme dalam OOP).


    return 0;
}
