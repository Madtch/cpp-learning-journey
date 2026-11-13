#include <iostream>
using namespace std;

int main(){

    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if(nilai >= 85){
        cout << "Grade A";
    }
    else if(nilai >= 70){
        cout << "Grade B";
    }
    else{
        cout << "Grade C";
    }

    return 0;
}
