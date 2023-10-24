#include <iostream>
using namespace std;

// Void function untuk memanggil loop dari "-"
void loop() {
    for (int i = 0; i < 68; i++) {
        cout << "-" ;
    }
};

int main()
{
    /* Tugas 1: Diberikan sebuah variable firstValue = 10 dan secondValue = 8. tukarlah nilai kedua
    variable tersebut dengan menggunakan variable tambahan dan tanpa menggunakan
    variable tambahan */

    int firstValue = 10, secondValue = 8, temp;

    loop();
    cout << endl;
    loop();

    // Dengan variabel tambahan
    cout << endl << "Nilai sebelum tertukar\nX = " << firstValue << " Y = " << secondValue << endl;
    temp = firstValue; // temp = 10
    firstValue = secondValue; // firstValue = 8
    secondValue = temp; // secondValue = temp = 10
    cout << "Nilai setelah tertukar\nX = " << firstValue << " Y = " << secondValue << endl;

    loop();

    // Tanpa variabel tambahan
    cout << endl << "Nilai sebelum tertukar\nX = " << firstValue << " Y = " << secondValue << endl;
    firstValue = firstValue + secondValue; // firstValue = 8 + 10 = 18
    secondValue = firstValue - secondValue; // secondValue = 18 - 10 = 8
    firstValue = firstValue - secondValue; // firstValue = 18 - 8 = 10
    cout << "Nilai setelah tertukar\nX = " << firstValue << " Y = " << secondValue << endl;

    loop();

    /* Tugas 2: Pak Tatang memiliki N ekor bebek. Ia ingin membagi-bagikan bebek-bebeknya
    tersebut sama rata kepada M orang temannya. Pak Tatang juga menyadari bahwa bisa
    saja terdapat sisa bebek karena banyaknya bebek tidak habis dibagi banyaknya
    temannya.

    Bantulah Pak Tatang untuk menentukan berapa ekor bebek yang harus dia berikan
    kepada masing-masing temannya, dan berapa sisanya. */

    int m,n;

    cout << endl << "Masukkan jumlah ekor bebek : " ;
    cin >> n;

    cout << "Masukkan jumlah teman-temannya : " ;
    cin >> m;

    // Operasi matematika
    int bagi = n / m, sisa = n % m;

    cout << endl << "Jumlah hasil bagi dari bebek Pak Tatang adalah = " << bagi << " dengan sisa = " << sisa << endl;

    loop();
    cout << endl;
    loop();

    return (0);
}