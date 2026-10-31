
#include <iostream>
using namespace std;

int main(){

    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    string hasil = (nilai >= 75) ? "Lulus" : "Tidak Lulus";

    cout << "Status: " << hasil;

    return 0;
}
