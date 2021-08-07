/* Un numar este Armstrong daca este egal cu suma cifrelor sale la puterea numarului de cifre.
   Exemple de numere Armstrong: 153, 371, 9474, 54748, 407, 1674
*/

#include <iostream>
using namespace std;

	
int getNumarCifre(int numar) {
          
	  int n = numar;
	  int nrc = 0;
	  
	  while ( n > 0 ) {
		
		n = n / 10;
		nrc = nrc + 1;
		
	  }
		   
	  return nrc;
      
}
	
bool esteNumarArmstrong( int numar) {
			
		int copienumar = numar;
		int numarcifre = getNumarCifre(numar);
		
		int suma = 0;
		
		while ( copienumar ) {
			
			int ultimacifra = copienumar % 10;
			int ultimacifralaputereanumaruluidecifre = 1;
			
			for (int i = 0; i < numarcifre; i++) {
				
				ultimacifralaputereanumaruluidecifre *= ultimacifra;
			
			}
			
			suma = suma + ultimacifralaputereanumaruluidecifre;
			copienumar = copienumar / 10;
			
		}
		
		if ( suma == numar ) {
			
			return true;
			
		} else {
			
			return false;
			
		}
}
		
int main()
{
          
		int n = 54748;
		  
		if ( esteNumarArmstrong(n) ) {
			  
			cout << "ARMSTRONG";
			  
		} else {
			  
			cout << "NU";
			  
		} 
}