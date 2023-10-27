#include <iostream>
using namespace std;

// Void function untuk memanggil loop dari "-"
void deco() {
    for (int i = 0; i < 50; i++) {
        cout << "-" ;
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
        deco();

        cout << "\n" << "List Program:" << "\n";
        cout << "1. Program Input Nilai" << "\n";
        cout << "2. Program Angka Terbesar" << "\n";
        cout << "3. Program Menghitung Luas Bangun Datar" << "\n";
        cout << "4. Exit" << "\n";

        cout << "==================================================\n" ;

        cout << "Masukkan pilihan: ";
        cin >> program;

        cout << "==================================================" << endl;

        switch (program)
        {
            /* Program Pertama
            Program untuk mengevaluasi nilai mata pelajaran. */
            case 1:
                int nilai;
                cout << "Masukan nilai anda: " ;
                cin >> nilai;

                if (nilai >= 90) {
                    cout << "Selamat! Anda mendapat nilai A" << endl;
                } else if (nilai >= 80) {
                    cout << "Anda mendapat nilai B" << endl;
                } else if (nilai >= 70) {
                    cout << "Anda mendapat nilai C" << endl;
                } else if (nilai >= 60) {
                    cout << "Anda mendapat nilai D." << endl;
                } else {
                    cout << "Anda mendapat nilai E." << endl;
                }
                ulang = true;
                break;
    
            /* Program Kedua
            Menentukan angka terbesar dari 3 data. Namun disini saya buat agar bisa memasukkan data sebanyak
            apapun dan bahkan bisa menemukan nilai terbesar ke-N dengan mengandalkan metode Algoritma Insertion. */
            case 2:
                { 
                    int A, N;
            
                    cout << "Masukkan jumlah Data: " ;
                    cin >> A;
            
                    cout << "Masukkan nilai terbesar yang mau dicari: " ;
                    cin >> N;

                    cout << "\n" ;

                    // Untuk memasukan data yang terinput ke dalam array
                    int data[A]; // Sebuah array yang nantinya akan diisikan nilai-nilai dari variable A
                    for (int i = 0; i < A; i++) {
                        int nilai;
                        cout << "Masukkan data ke-" << i + 1 << " : " ; // Untuk menentukan nilai-nilai variable A
                        cin >> nilai;
                        data[i] = nilai;
                    } // Loop akan terus berjalan sampai jumlah yg diinput di Variable A terpenuhi

                    // Array untuk menyimpan nilai terbesar ke-N yang ada di data
                    int nilai_terbesar[N]; 
                    for (int i = 0; i < N; i++) {
                        nilai_terbesar[i] = 0;
                    }

                    // Insertion Algorithm
                    for (int i = 0; i < A; i++) {
                        int nilai = data[i];
                        int j = N - 1;
                        while (j >= 0) {
                            if (nilai > nilai_terbesar[j]) {
                                if (j < N - 1) {
                                    nilai_terbesar[j + 1] = nilai_terbesar[j];
                                }
                                nilai_terbesar[j] = nilai;
                            }
                            j--;
                        }
                    }

                    cout << "\n" << "Nilai terbesar ke-" << N << " adalah " << nilai_terbesar[N - 1] << endl;
                }
                ulang = true;
                break;
            
            /* Program Ketiga
            Sebuah Program Kalkulator yang berguna untuk mencari luas dari 3 bangun datar. */
            case 3:
                {
                    int kalkulator;
                    cout << "List kalkulator yang bisa digunakan:" << "\n";
                    cout << "1. Persegi" << "\n";
                    cout << "2. Persegi Panjang" << "\n";
                    cout << "3. Segitiga" << "\n";

                    cout << "==================================================\n" ;

                    cout << "Masukan pilihan : " ;
                    cin >> kalkulator;
                    
                    cout << "==================================================" << endl;

                    /* Didalam switch-case bisa terdapat switch-case lagi. Namanya nested switch-case. */
                    switch (kalkulator)
                    {
                    /* Program Kalkulator Luas Persegi
                    Sebuah program yang mencari luas Persegi. */
                    case 1:
                        {
                            int S;
                            cout << "Menghitung Luas Persegi" << "\n\n";

                            cout << "Masukkan Sisi dari Persegi: " ;
                            cin >> S;

                            int luasPersegi = S * S;
                            cout << "\n" << "Luas dari Persegi tersebut adalah " << luasPersegi << endl;
                        }
                        break;

                    /* Program Kalkulator Kedua
                    Sebuah program yang mencari luas Persegi Panjang. */
                    case 2:
                        {
                            int P, L;
                            cout << "Menghitung Luas Persegi Panjang" << "\n\n";

                            cout << "Masukan Panjang = " ;
                            cin >> P;

                            cout << "Masukan Lebar = " ;
                            cin >> L;

                            int luasPersegiPanjang = P * L;
                            cout << "\n" << "Luas dari Persegi Panjang tersebut adalah " << luasPersegiPanjang << endl;
                        }
                        break;
                    
                    /* Program Kalkulator Ketiga
                    Sebuah program yang mencari luas Segitiga. */
                    case 3:
                        {
                            int A, T;
                            cout << "Mencari Luas Segitiga" << "\n\n";

                            cout << "Masukan Alas = " ;
                            cin >> A;

                            cout << "Masukan Tinggi = " ;
                            cin >> T;

                            int luasSegitiga = 0.5 * A * T;
                            cout << "\n" << "Luas dari Segitiga tersebut adalah " << luasSegitiga << endl;
                        }
                        break;
                    
                    default:
                        cout << "Angka yang anda pilih tidak ada di pilihan!" << endl;
                        break;
                    }
                }
                ulang = true;
                break;
            
            /* Diperlukan agar bisa keluar dari loop dan menutup Program ini. */
            case 4:
                cout << "Keluar dari program..." ;
                ulang = false;
                break;
            
            /* Code yang berguna ketika kita menginput nilai yang tidak ada didalam Pilihan. */
            default:
                cout << "Angka yang anda pilih tidak ada di pilihan!" << endl;
                break;
        }
    } while (ulang);
    
    return 0;
}