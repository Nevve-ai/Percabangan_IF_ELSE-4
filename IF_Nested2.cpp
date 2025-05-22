#include <iostream> 
using namespace std;

int main () {
    int nilai;
    cout << "Masukkan nilai ujian kamu :";
    cin >> nilai;

    if (nilai >= 70)
    {
        cout << "Selamat kamu lulus ujian !" << endl;

        if (nilai >= 90)
        {
            cout << "Keren, kamu dapat nilai A" << endl;
        }
        else if (nilai >= 80)
        {
            cout << "Bagus, kamu dapat nilai B" << endl;
        }
        else
        {
            cout << "Lumayan, kamu dapat nilai C" << endl;
        }
    }
    else
    {
        cout << "Maaf, kamu belum lulus ujian" << endl;
    }

    return 0;
}