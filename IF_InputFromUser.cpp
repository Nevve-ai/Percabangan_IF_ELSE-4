#include <iostream>
using namespace std;

int main () {
    int umur;
    cout << "Masukkan Umur kamu : ";
    cin >> umur;

    if (umur >= 17){
        cout << "Kamu sudah bisa memiliki KTP" << endl;
    }
    else {
        cout << "Kamu belum bisa memiliki KTP" << endl;
    }
    return 0;
}