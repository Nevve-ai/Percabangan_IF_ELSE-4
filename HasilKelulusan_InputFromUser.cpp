#include <iostream>
using namespace std;

int main () {
    int nilai;
    cout << "Masukkan nilai ujian kamu : ";
    cin >> nilai;

    if (nilai >= 90){
        cout << "Kamu lulus dapat nilai A" << endl;
    }
    else if (nilai >= 80)
    {
        cout << "Kamu lulus dapat nilai B" << endl;
    }
    else if (nilai >= 70)
    {
        cout << "Kamu lulus dapat nilai C" << endl;
    }
    else
    {
        cout << "Kamu tidak lulus dapat nilai D" << endl;
    }
    
    return 0;
}