//Soal: Program Penilaian Ujian dengan Kategori dan Keterangan
//Buatlah program yang menerima input nilai ujian dari user (0–100), kemudian tampilkan:

//Kategori nilai:
//A: 90 – 100
//B: 80 – 89
//C: 70 – 79
//D: 60 – 69
//E: 0 – 59
//Keterangan kelulusan:
//Nilai A–C → Lulus
//Nilai D–E → Tidak Lulus

#include <iostream>
using namespace std;

int main () {

    int nilai;
    cout << "Masukkan nilai ujian kamu :";
    cin >> nilai;

    if (nilai > 100 || nilai < 0 )
    {
        cout << "Nilai tidak valid! Harus di antara 0 - 100" << endl;
    }
    
    else {

        if (nilai >= 70)
        {
            if (nilai >= 90)
            {
                cout << "Kategori : A" << endl << "Keterangan : Lulus" << endl;
            }
            else if (nilai >= 80)
            {
                cout << "Kategori : B" << endl << "Keterangan : Lulus" << endl;
            }
            else
            {
                cout << "Kategori : C" << endl << "Keterangan : Lulus" << endl;
            }
        }
        else
        {
            if (nilai >=60)
            {
                cout << "Kategori : D" << endl << "Keterangan : Tidak Lulus" << endl;
            }
            else if (nilai >= 0)
            {
                cout << "Kategori : E" << endl << "Keterangan : Tidak Lulus" << endl;
            }
        }
    }   
    return 0;

}