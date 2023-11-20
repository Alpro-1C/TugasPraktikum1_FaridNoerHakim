#include <iostream>

int Fibo(int range) {
    int a = 0;
    int b = 1;
    int c = 0;
    
    for(int i = 1; i <= range; i++) {
        // 2 anka pertama Bilangan Fibonacci
        if(i == 1) {
            std::cout << a << " ";
            continue;
        }
        if(i == 2) {
            std::cout << b << " ";
            continue;
        }
        // 3 angka sampai n Bilangan Fibonacci
        c = a + b;
        a = b;
        b = c;
         
        std::cout << c << " ";
    }
    return range;
}