#include <iostream> 
using namespace std;

int main () {

    int nilai;
    cout << "Masukkan nilai ujian kamu :";
    cin >> nilai;

    if (nilai >= 75)
    {
        cout << "Selamat kamu lulus ujian !" << endl;

        if (nilai >= 95)
        {
            cout << "Keren, kamu dapat nilai A" << endl;
        }
    }
    else
    {
        cout << "Maaf, kamu belum lulus ujian" << endl;
    }

    return 0;
}