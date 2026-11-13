#include <iostream>
using namespace std;

int main(){

    int pilihan;

    cout << "Masukkan pilihan (1-3): ";
    cin >> pilihan;

    switch(pilihan){
        case 1:
            cout << "Menu Satu";
            break;

        case 2:
            cout << "Menu Dua";
            break;

        case 3:
            cout << "Menu Tiga";
            break;

        default:
            cout << "Pilihan tidak tersedia";
    }

    return 0;
}
