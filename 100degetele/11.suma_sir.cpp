/*
11.Sa se citeasca intreg n de la tastatura. Sa se calculeze suma = 1 + 3/1*2 + 5/(1*2*3) +...+ (2n-1)/1*2*3*...*n. Sa se afiseze suma.
*/
#include <iostream>
using namespace std;

int main()
{
               
          int n = 10;
          float suma = 0;
          int produs = 1;
          
          for (int i = 1; i <= n; i++) {
            
            for (int j = i; j <= i ; j++) {
              	
            	produs = produs * j;
              	
            }
            
            suma = suma + (2 * i - 1) / ((float) produs);
			
            cout << "Pasul este " << i << endl;
            cout << "Suma este " << suma << endl;
			cout << "Produs este " << produs << endl << endl;
            
          }

          cout << suma;
      
}