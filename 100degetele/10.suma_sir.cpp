/* 10.Sa se citeasca n numar intreg de la tastatura si sa se calculeze suma s=1+2+3+...+n. Sa se afiseze rezultatul s.  */

#include <iostream>
using namespace std;

int main()
{
		
		//declaratie
		int n;
		int suma = 0;
		
		cin >> n;
		
		for (int i = 0; i <= n; i++) {
			
			suma = suma + i;
			
		}          
      	
      	cout << suma;
      
}