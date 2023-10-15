#include <iostream>

using namespace std;

// Void function untuk memanggil loop dari "-"
void loop() {
    for (int i = 0; i < 65; i++) {
        cout << "-" ;
    }
};

int main()
{
    // Variable-variable yang akan digunakan
    string namaLengkap;
    string kelas;
    string cita;
    string motivasi;
    // Menggunakan variable int biasa gak bakal work jadi harus pakai int64
    __INT64_TYPE__ npm; 

    // Loop yang dipanggil dari void function
    loop();

    cout << "\n" << "Nama : ";
    // Function untuk menginput string dengan spasi
    getline (cin, namaLengkap);
    cout << "\n";
   
    cout << "NPM : ";
    cin >> npm;
    cout << "\n";

    cout << "Kelas : ";
    // Kalo tidak ada cin.ignore() maka getline() dibawah tidak akan terbaca karena ada string "\n"
    cin.ignore();
    getline (cin, kelas);
    cout << "\n";

    cout << "Cita - Cita : ";
    getline (cin, cita);
    cout << "\n";

    cout << "Motivasi masuk ke Informatika: ";
    getline (cin, motivasi);

    loop();
    return 0;      
};