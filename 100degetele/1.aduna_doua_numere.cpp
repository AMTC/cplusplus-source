/*
1.Sa se citeasca a,b doua numere intregi de la tastatura. Sa se calculeze suma lor si sa se afiseze rezultatul la consola.
*/

#include <iostream>
using namespace std;

int main()
{
		
		//declaratie
		int a;
		int b;
		int suma;
		
		//initializare 
		cin >> a;
		cin >> b;

		//operatie
		suma = a + b;
		
		//pune pe ecran
		cout << suma;

		//valoare returnata si iesire
		return 0;
		
}