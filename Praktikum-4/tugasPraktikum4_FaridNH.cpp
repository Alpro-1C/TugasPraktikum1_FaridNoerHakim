#include <iostream>
using namespace std;

// Void function untuk memanggil loop dari "-"
void deco() {
    for (int i = 0; i < 70; i++) {
        cout << "=" ;
    }
};
/* BISMILLAH IPK DIATAS 3,5 AMINNNNNNNNN */

int main()
{
    int program; // Variable yang digunakan untuk memanggil switch-case
    
    /* Saya buat opsi pilihan menggunakan loop do-while agar bisa seperti program sungguhan
    yang akan tetap terbuka sampai memilih opsi keluar/exit. */
    bool ulang = true; // Variable yang berguna untuk menentukan program akan diulang atau keluar
    do
    {
        deco();
        cout << "\n";

        cout << "List Program:" << "\n";
        cout << "1. Program Menampilkan Bilangan Ganjil, Genap, Prima beserta Faktor dan Jumlahnya" << "\n";
        cout << "2. Program Pola Bintang" << "\n";
        cout << "3. Program Deret Fibonacci" << "\n";
        cout << "4. Exit" << "\n";

        deco();
        cout << "\n";

        cout << "Masukkan pilihan: ";
        cin >> program;

        deco();
        cout << endl;

        switch (program)
        {
        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
        
        case 3:
            /* code */
            break;
        
        case 4:
            cout << "Keluar dari program..." ;
            ulang = false;
            break;

        default:
            break;
        }
    } while (ulang);
}