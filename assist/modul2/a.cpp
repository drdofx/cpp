/*
Primitif:
1. Boolean -> True/false true:1 false:0
2. Integer -> 2, 3, 4
    - int (var) -> 2^31 : 2147483648 --> overflow
    - long -> 
    - long long  2^63
    - unsigned int -> 2^31 (+) 0 - 2^31
3. Float -> 2.5, 2.6
    - Float 
    - Double
4. Karakter -> 'a', '1'

Bentukan:
1. String -> Kumpulan Karakter, for loop 'saya' s[0]: karakter
2. Array
*/
#include <iostream> 
using namespace std; 
 
int main() 
{ 
  char kar;      //pendefinisian variabel kar 
  kar = 'A';      // penugasan 'A' ke variabel kar 
   
  int bil;               
  bil = 32763;             
   
  long jum_penduduk;           
  jum_penduduk = 170123456; 
   
  float bil_float;           
  bil_float = 1.23e2; 
   
  float a; 
  double b; 
  a = 56.0123456789123456789; 
  b = 56.0123456789123456789; 
 
  cout <<"isi kar              = "<<kar<<'\n'; 
  kar = 66;      // penugasan nilai ASCII ke kar 
   
  cout <<"isi kar              = "<<kar<<'\n'; 
  cout <<"isi bil              = "<<bil<<'\n'; 
 
  bil = 121212121212121212121;      // penugasan nilai negatif ke integer 
   
  cout <<"isi bil              = "<<bil<<'\n'; 
   
  cout <<"isi jum_penduduk     = "<<jum_penduduk<<'\n'; 
  cout <<"isi bil_float        = "<<bil_float<<'\n'; 
 
  cout <<"Isi a (float)        = "<<a<<'\n'; 
  cout <<"Isi b (double)       = "<<b<<'\n'; 


  return 0;
}

