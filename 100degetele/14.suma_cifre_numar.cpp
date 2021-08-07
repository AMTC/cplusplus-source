/*
14.Sa se citeasca un numar intreg de la tastatura. Sa se calculeze suma cifrelor numarului intreg si sa se afiseze rezultatul.
*/

#include <iostream>
using namespace std;

int main()
{
          
          int n = 267895432;
          int suma = 0;
		  cout << "Numarul initial este :" << n << endl << endl; 
          
          while ( n > 0 ) {
            
			cout << "Aduna " << n % 10 << endl;
			suma += n % 10;
            n = n / 10;
         	
          }
		  
          cout << endl;     
          cout << "Suma cifrelor este: " << suma;
      
}