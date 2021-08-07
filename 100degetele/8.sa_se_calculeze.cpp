/* 8.Sa se citeasca doua numere de la tastatura si sa se calculeze suma lor daca sunt amandoua >0, produsul lor daca sunt amandoua <0 si diferenta lor daca sunt unu >0 si celalalt <0.  */
#include <iostream>
using namespace std;

int main()
{
		
		//declaratie
		int a;
		int b;
		
		cin >> a;
		cin >> b;	
     
		if (a >= 0 && b >= 0) {
			
			cout << a + b;
			
		} else if (a < 0 && b < 0 ) {
		
			cout << a * b;
			
		} else {
		
			cout << a-b;
		}
}