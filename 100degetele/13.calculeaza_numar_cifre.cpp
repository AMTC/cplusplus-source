/*
13.Sa se citeasca un numar n intreg de la tastatura. Sa se contorizeze cate cifre sunt in numarul n si sa se afiseze numarul lor.
*/

#include <iostream>
using namespace std;

int main()
{
          
          int n = 267845698;
          int nrc = 0;
          
          while ( n > 0 ) {
            
			cout << n << endl;
            nrc = nrc + 1;
			n = n / 10;
          	
          }
               
          cout << endl << "Numarul de cifre este: " << nrc;
      
}



