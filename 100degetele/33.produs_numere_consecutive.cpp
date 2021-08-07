/*
Se citeste un numar natural n. Sa se descompuna ca produs de doua numere naturale consecutive. Daca acest lucru nu este posibil, atunci sa se afiseze mesajul "IMPOSIBIL".
Exemple:
30 = 5*6
20 = 4*5
10 nu se poate descompune astfel.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned int n,x,d;
	
    cin >> n;
	
    d = 1+4*n;
	
    if( sqrt(d) == floor( sqrt(d) ) )
    {
        x = (-1+sqrt(d))/2;
		
        cout << x << " * " << x+1 << " = " << n;
    }
	
    else cout << "IMPOSIBIL";
	
    return 0;
}
//rezolvarea se bazeaza pe rezolvarea ecuatiei x*x+x-n=0