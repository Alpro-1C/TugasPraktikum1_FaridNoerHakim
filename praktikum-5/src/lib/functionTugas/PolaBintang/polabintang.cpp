#include <iostream>
#include "polabintang.hpp"

int Kolom(int kolom) {
    for (int i = 1; i <= kolom; i++) {
        // Untuk menghitung negative space dari Pola Bintang
        for (int k = kolom - i; k > 0; k--) {
            std::cout << " " ;
        }
        // Untuk menambahkan Pola Bintang
        for (int j = 1; j <= i; j++) {
            std::cout << "* " ;
        }
        std::cout << std::endl;
    }
    return kolom;
}