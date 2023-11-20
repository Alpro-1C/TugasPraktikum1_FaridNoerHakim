#include <iostream>
#include "GanjilGenapPrima.hpp"

int Ganjil(int rangeAwal, int rangeAkhir, int &sum) {
    sum = 0;
    for (int i = rangeAwal; i <= rangeAkhir; i++) {
        if (i % 2 != 0) {
            std::cout << i << " " ;
            sum += i; // Hasil jumlah dari Bilangan Ganjil
        }
    }
    return sum;
}

int Genap(int rangeAwal, int rangeAkhir, int &sum) {
    sum = 0;
    for (int i = rangeAwal; i <= rangeAkhir; i++) {
        if (i % 2 == 0) {
            std::cout << i << " " ;
            sum += i; // Hasil jumlah dari Bilangan Ganjil
        }
    }
    return sum;
}

int Prima(int range) {
    int sum = 0;
    for (int i = 2; i <= range; i++) {
        int prime = 0;
        // Menghitung bilangan2
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = 1;
                break;
            }
        }
        // Untuk menentukan apakah bilangan tersebut Bilangan Prima atau bukan
        // Jika tidak ada ini maka akan menjadi Bilangan Komposit
        if (prime == 0 && range != 1) {
            std::cout << i << " " ;
            sum += i; // Hasil jumlah dari Bilangan Prima
        }
    }
    return sum;
}

int Faktor(int sum) {
    for (int i = sum; i > 0; --i) {
        if (sum % i == 0) {
            std::cout << i << " " ;
        }
    }
    return sum;
}