/* Header */

#include <iostream>

/* Function yang akan digunakan */

#include "../lib/function/clearscreen/clearscreen.hpp"        // Memanggil fungsi yang ada di folder "../function/clearscreen/"
/* Fungsinya untuk mengclear atau menghapus output-output di terminal agar
   terlihat lebih rapih dan tidak acak-acakan. */

#include "../lib/function/pauseconsole/pauseconsole.hpp"    // Memanggil fungsi yang ada di folder "../function/pauseconsole/"
/* Fungsinya untuk membuat console tidak langsung terclose atau dengan kata lain di pause.
   Biasanya kan kalo kita pilih opsi exit, itu lgsg keluar dan kita juga gk tau outputnya
   gimana, nah makanya kita pause dulu consolenya sebelum keluar. Disini fungsinya menggunakan
   prompt "Tekan enter untuk melanjutkan..." biar kaya aplikasi-aplikasi lain. */

#include "../lib/functionTugas/GanjilGenapPrima/GanjilGenapPrima.hpp"

#include "../lib/functionTugas/PolaBintang/polabintang.hpp"

#include "../lib/functionTugas/Fibonacci/fibonacci.hpp"

/* Kenapa saya pisahkan function diatas dari main file tidak seperti function deco()?
   Biar keliatan profesional aja sih :D saya juga rada males sih mindahinnya :)
   (Sama biar bisa nunjukin kalau function bisa di main file dan bisa juga di file lain)

   Untuk memanggil sebuah fungsi kita harus menambahkan fungsi di header dengan #include terlebih dahulu.
   Kita bisa menaruh fungsinya di tempat yang sama dengan main file kita, tinggal ketik
   #include "fungsimu.cpp". Tapi, kalo projeknya besar jelas kita perlu mengorganisirnya
   dan memisahkan fungsi-fungsi dari main file. Nah, caranya kita tinggal taruh fungsi
   di folder lain lalu tambahkan "../foldernya/fungsimu.cpp" di #include. */

// Void function untuk memanggil loop dari "="
void deco() {
    for (int i = 0; i < 85; i++) {
        std::cout << "=" ;
    }
}

void deco2() {
    for (int i = 0; i < 85; i++) {
        std::cout << "_" ;
    }
}

/* Main Program */

/* BISMILLAH IPK DIATAS 3,5 AMINNNNNNNNN */

int main()
{
    using namespace std;
    int program; // Variable yang digunakan untuk memanggil switch-case
    
    /* Saya buat opsi pilihan menggunakan loop do-while agar bisa seperti program sungguhan
    yang akan tetap terbuka sampai memilih opsi keluar/exit. */
    bool ulang = true; // Variable yang berguna untuk menentukan program akan diulang atau keluar
    do
    {
        deco();
        cout << "\n";

        cout << "\t\t\t" << "|" << "\tList Program:\t    " << "|" << "\n";
        cout << "1. Program Menampilkan Bilangan Ganjil, Genap, Prima beserta Faktor dan Jumlahnya" << "\n";
        cout << "2. Program Pola Bintang Pyramida" << "\n";
        cout << "3. Program Deret Fibonacci" << "\n";
        cout << "4. Exit" << "\n";

        deco();
        cout << "\n";

        cout << "Masukkan pilihan: ";
        cin >> program;

        deco2();
        cout << endl;

        switch (program)
        {
        case 1:
            {

                PauseConsole();
                ClearScreen();

                int programDeret;

                bool ulang2 = true;
                do
                {
                    deco();
                    cout << "\n" ;

                    cout << "\t\t\t" << "|" << "\tList Program:\t    " << "|" << "\n";
                    cout << "5. Ganjil dan Genap" << "\n";
                    cout << "6. Bilangan Prima" << "\n";
                    cout << "7. Exit" << "\n";

                    deco();
                    cout << "\n";

                    cout << "Masukkan pilihan: ";
                    cin >> programDeret;

                    deco2();
                    cout << endl;

                    switch (programDeret)
                    {
                    case 5:
                        {
                            int A, B, jumlah;
                            cout << "\t\t\t" << "|" << "\tProgram Deret Bilangan Ganjil Genap\t    " << "|" << "\n" ;

                            cout << "Masukkan Range awal: " ;
                            cin >> A;
                            cout << "Masukkan Range akhir: " ;
                            cin >> B;

                            cout << "\n" << "Deret Bilangan Ganjil: " ;
                            Ganjil(A, B, jumlah);

                            cout << "\n" << "Lalu Hasil Jumlahnya: " << jumlah;

                            cout << "\n" << "Dan Faktor dari " << jumlah << " adalah: " ;
                            Faktor(jumlah);

                            cout << "\n\n" << "Deret Bilangan Genap: " ;
                            Genap(A, B, jumlah);

                            cout << "\n" << "Lalu hasil jumlahnya: " << jumlah;

                            cout << "\n" << "Dan faktor dari " << jumlah << " adalah: " ;
                            Faktor(jumlah);

                            cout << endl;

                        }
                        ulang2 = true;
                        PauseConsole();
                        ClearScreen();
                        break;

                    case 6:
                        {
                            int A, B, jumlah;

                            cout << "\t\t\t" << "|" << "\tProgram Deret Bilangan Prima\t    " << "|" << "\n" ;

                            cout << "Masukkan Range awal: " ;
                            cin >> A;

                            cout << "\n" << "Deret Bilangan Prima: ";
                            int sum = Prima(A);

                            cout << "\n" << "Lalu hasil jumlahnya: " << sum;
                            cout << "\n" << "Dan faktor dari " << sum << " adalah: " ;
                            Faktor(sum);

                            cout << endl;

                        }
                        ulang2 = true;
                        PauseConsole();
                        ClearScreen();
                        break;
                    
                    case 7:
                        {
                            cout << "Keluar dari Program..." << endl ;
                        }
                        ulang2 = false;
                        PauseConsole();
                        ClearScreen();
                        break;

                    default:
                        cout << "Pilihan yang anda pilih tidak ada!" << endl;
                        ulang2 = true;
                        PauseConsole();
                        ClearScreen();
                        break;
                    }
                } while (ulang2);
                
            }
            break;
        
        case 2:
            {
                int n;

                cout << "\t\t\t" << "|" << "\tProgram Pola Bintang Pyramida\t    " << "|" << "\n" ;
                cout << "Masukkan jumlah kolom: " ;
                cin >> n;

                Kolom(n);

            }
            ulang = true;
            PauseConsole();
            ClearScreen();
            break;
        
        case 3:
            {
                int n;

                cout << "\t\t\t" << "|" << "\tProgram Deret Fibonacci\t    " << "|" << "\n" ;
                cout << "Masukkan batas jumlah deret: " ;
                cin >> n;

                Fibo(n);

                cout << endl ;
            }
            ulang = true;
            PauseConsole();
            ClearScreen();
            break;
        
        case 4:
            cout << "Keluar dari program..." << endl ;
            ulang = false;
            PauseConsole();            // Function yang dipanggil dari folder "/function/pauseconsole/"
            ClearScreen();      // Function yang dipanggil dari folder "/function/clearscreen/"
            break;


        default:
            cout << "Angka yang anda pilih tidak ada di pilihan!" << endl ;
            PauseConsole();
            ClearScreen();
            break;
        }
    } while (ulang);
    return 0;
}