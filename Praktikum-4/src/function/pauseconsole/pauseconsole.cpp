/* Saya ambil dari artikel https://cplusplus.com/forum/beginner/105772/#msg571520
   Alasannya juga sama seperti di function ClearScreen(), karena untuk mempause
   console kita musti harus menggunakan library conio atau function system("pause"). */

#include <iostream>
#include <limits>

void pause( const char* enter = "Tekan Enter untuk melanjutkan..." ) 
{
    std::cin.clear() ; // Mengclear setiap error/failed states jika ada
    std::streambuf* buf = std::cin.rdbuf() ;
    const int eof = std::char_traits<char>::eof()  ;

    if( buf->in_avail() || ( buf->sungetc() != eof && std::cin.get() != '\n' ) )
        std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' ) ;

    std::cout << enter ;
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' ) ;
}