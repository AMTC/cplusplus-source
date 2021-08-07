/* 7.Sa se citeasca un numar intreg de la tastatura si sa se afle daca este par sau impar si sa se afiseza "PAR" sau "IMPAR". */

#include <iostream>
using namespace std;

int main()
{
		
		//declaratie
		int numar;
		cin >> numar;
		
		if ( numar % 2 == 0 ) {
			
			cout << "Numarul este par!";
			
		} else {
			
			cout << "Numarul este impar!";
		} 	      
}