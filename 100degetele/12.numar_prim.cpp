/*
12.Sa se citeasca un numar intreg de la tastatura. Sa se afle daca este numar prim si sa se afiseze DA sau NU.
*/

#include <iostream>
using namespace std;

int main()
{
               
          int n;
          int count = 0;
          cin >> n;
          
          for (int i = 2; i < n; i++) {
            
            if (n % i == 0 ) {
			  cout << "Numarul " << n << " se imparte la " << i << "\n";
			  count ++;
              //break;
            
            }
             
          }
		  
          if (count == 0 ) {
          
            cout << n << " este prim";
          
          } else {
            
            cout << n << " nu este prim";
            
          }
      
}