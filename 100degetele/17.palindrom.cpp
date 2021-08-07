/* Un numar este palindrom daca se citeaste la fel de la stanga la dreapta ca de la dreapta la stanga.
	Exemple de numere palindrom: 111, 1221, 45654 
*/
#include <iostream>
using namespace std;

int inverseazaNumar(int numar) {
			
		int invers = 0;
		int rest = 0;
		
		while ( numar > 0 ) {
			
			rest = numar % 10;
			invers = ( invers * 10 ) + rest;
			numar = numar / 10;
			
		}
		
		return invers;
}
		
bool verificaPalindrom(int numar) {
			
		int invers = inverseazaNumar(numar);

		if ( invers == numar ) {
		
			return true;
		
		} else {
			
			return false;
			
		}
		
}
		
int main()
{
          
		int numar = 1234;
		  
		if ( verificaPalindrom(numar) ) {
			
			cout << "DA";
			
		} else {
			  
			cout << "NU";
			  
		}
}
