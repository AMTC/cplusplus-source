/* 9.Sa se citeasca 3 numere intregi de la tastura si sa se afle daca ele pot fi laturile unui triunghi si sa se afiseze "DA" sau "NU".  */

#include <iostream>
using namespace std;

int main()
{
		
		//declaratie
		int a = 3;
		int b = 4;
		int c = 5;
		
		if ( (a + b > c) && (a + c > b) && (b + c > a)) {
			
			cout << "Numerele date pot fi laturile unui triunghi!";
			
		} else {
		
			cout << "Numerele date nu pot fi laturile unui triunghi!";
			
		}			
}