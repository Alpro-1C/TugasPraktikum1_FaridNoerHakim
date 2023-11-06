#include <iostream>
using namespace std;

// Void function untuk memanggil loop dari "="
void deco() {
    for (int i = 0; i < 85; i++) {
        cout << "=" ;
    }
};

void deco2() {
    for (int i = 0; i < 85; i++) {
        cout << "_" ;
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
                            int A, B, jumlah = 0;
                            cout << "\t\t\t" << "|" << "\tProgram Deret Bilangan Ganjil Genap\t    " << "|" << "\n" ;

                            cout << "Masukkan Range awal: " ;
                            cin >> A;
                            cout << "Masukkan Range akhir: " ;
                            cin >> B;

                            cout << "\n" << "Deret Bilangan Ganjil: " ;
                            for (int i = A; i <= B; i++) {
                                if (i % 2 != 0) {
                                    cout << i << " " ;
                                    jumlah += i;
                                }
                            }
                            cout << "\n" << "Lalu Hasil Jumlahnya: " << jumlah;
                            cout << "\n" << "Dan Faktor dari " << jumlah << " adalah: " ;
                            for (int i = jumlah; i > 0; --i) {
                                if (jumlah % i == 0) {
                                    cout << i << " " ;
                                }
                            }
                            cout << "\n\n" << "Deret Bilangan Genap: " ;
                            for (int j = A; j <= B; j++) {
                                if (j % 2 == 0) {
                                    cout << j << " " ;
                                    jumlah += j;
                                }
                            }
                            cout << "\n" << "Lalu hasil jumlahnya: " << jumlah;
                            cout << "\n" << "Dan faktor dari " << jumlah << " adalah: " ;
                            for (int j = jumlah; j > 0; --j) {
                                if (jumlah % j == 0) {
                                    cout << j << " " ;
                                }
                            }
                            cout << endl;
                        }
                        ulang2 = true;
                        break;

                    case 6:
                        {
                            int A, B, jumlah = 0;

                            cout << "\t\t\t" << "|" << "\tProgram Deret Bilangan Prima\t    " << "|" << "\n" ;

                            cout << "Masukkan Range awal: " ;
                            cin >> A;

                            cout << "\n" << "Deret Bilangan Prima: ";
                            for (int i = 2; i <= A; i++) {
                                B = 0;
                                for (int j = 2; j <= i / 2; j++) {
                                    if (i % j == 0) {
                                        B = 1;
                                        break;
                                    }
                                }
                                if (B == 0 && A != 1) {
                                    cout << i << " " ;
                                    jumlah += i;
                                }
                            }

                            cout << "\n" << "Lalu hasil jumlahnya: " << jumlah;
                            cout << "\n" << "Dan faktor dari " << jumlah << " adalah: " ;
                            for (int k = jumlah; k > 0; --k) {
                                if (jumlah % k == 0) {
                                    cout << k << " " ;
                                }
                            }
                            cout << endl;
                        }
                        ulang2 = true;
                        break;
                    
                    case 7:
                        {
                            cout << "Keluar dari Program..." << endl ;
                        }
                        ulang2 = false;
                        break;

                    default:
                        cout << "Pilihan yang anda pilih tidak ada!" << endl;
                        ulang2 = true;
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

                for (int i = 1; i <= n; i++) {
                    for (int k = n - i; k > 0; k--) {
                        cout << " " ;
                    }
                    for (int j = 1; j <= i; j++) {
                        cout << "* " ;
                    }
                    cout << endl;
                }
            }
            ulang = true;
            break;
        
        case 3:
            {
                int n, a = 0, b = 1, c = 0;

                cout << "\t\t\t" << "|" << "\tProgram Deret Fibonacci\t    " << "|" << "\n" ;
                cout << "Masukkan batas jumlah deret: " ;
                cin >> n;

                for(int i = 1; i <= n; i++) {
                    // Tampilkan 2 angka pertama
                    if(i == 1) {
                        cout << a << " ";
                        continue;
                    }
                    if(i == 2) {
                        cout << b << " ";
                        continue;
                    }
                    // Hitung untuk angka ke 3 dan seterusnya
                    c = a + b;
                    a = b;
                    b = c;
         
                    cout << c << " ";
                }
                cout << endl ;
            }
            ulang = true;
            break;
        
        case 4:
            cout << "Keluar dari program..." ;
            ulang = false;
            break;

        default:
            cout << "Angka yang anda pilih tidak ada di pilihan!" << endl ;
            break;
        }
    } while (ulang);
    return 0;
}