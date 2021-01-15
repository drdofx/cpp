#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Recursive function to 
// return GCD of a and b 
long long gcd(long long a, long long b) 
{ 
    if (a == 0) 
        return b; 
    else if (b == 0) 
        return a; 
    if (a < b) 
        return gcd(a, b % a); 
    else
        return gcd(b, a % b); 
} 
  
// Function to convert decimal to fraction 
void decimalToFraction(double number) 
{ 
    // Fetch integral value of the decimal 
    double intVal = floor(number); 
  
    // Fetch fractional part of the decimal 
    double fVal = number - intVal; 
  
    // Consider precision value to 
    // convert fractional part to 
    // integral equivalent 
    const long pVal = 1000000000; 
  
    // Calculate GCD of integral 
    // equivalent of fractional 
    // part and precision value 
    long long gcdVal 
        = gcd(round(fVal * pVal), pVal); 
  
    // Calculate num and deno 
    long long num 
        = round(fVal * pVal) / gcdVal; 
    long long deno = pVal / gcdVal; 
  
    // Print the fraction 
    cout << (intVal * deno) + num 
         << "/" << deno << endl; 
} 
  

int main()
{
    // initialize variable float jumlah
	double jumlah=0;

    // for loop untuk penyebut, jika penyebut genap -> minus, jika ganjil -> plus
	for (int i=1; i<=1000; i++) {
		if (i % 2 == 0) {
            jumlah -= 1.0/i;
        } else {
            jumlah += 1.0/i;
        }
    }

    // output hasil dan exit program
	cout << "S = 1 - 1/2 + 1/3 - 1/4 + ... + 1/999 - 1/1000 => " << endl;
    cout << "Dalam desimal: " << jumlah << endl;
    cout << "Dalam pecahan: "; 
    decimalToFraction(jumlah);
    cout << endl;

	return 0;
}