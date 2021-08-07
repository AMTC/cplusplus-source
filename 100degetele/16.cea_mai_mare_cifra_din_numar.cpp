/*
Sa se citeasca un numar intreg de la tastatura. Sa se afle care este cea mai mare cifra din numarul intreg si sa se afiseze.
*/

#include <iostream>
using namespace std;

int main()
{
          
	  int n = 9876543;
	  int cifra = 0;
	  int cea_mai_mare_cifra = 0;
	  
	  while ( n > 0 ) {
		
		cifra = n % 10;
		
		if ( cifra > cea_mai_mare_cifra ) {
			
			cea_mai_mare_cifra = cifra;
		
		}
					
		n = n / 10;
		
	  }
		   
	  cout << "Cea mai mare cifra este: " << cea_mai_mare_cifra;
      
}