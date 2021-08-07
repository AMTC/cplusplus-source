/*
Sa se citeasca un numar intreg de la tastatura. Sa se afle cate numere prime sunt in cifrele numarului intreg si sa se afiseze rezultatul.
*/
#include <iostream>
using namespace std;
	
bool estePrim( int numar ) {
			
		int count = 0;
		
		for (int i = 2; i < numar; i++) {
		
			if (numar % i == 0 ) {
			  count ++;
			  break;
			
			}
		 
		}
		  
		if (count == 0 ) {
			
			cout << numar << "este prim!" << endl;
			
			return true;
		  
		} else {
			
			return false;
			
		}
}
 
int main()
{
	  int n = 58346892;
	  int cifra = 0;
	  int count = 0;
	  
	  cout << "Numarul initial este: " << n << endl; 
	  
	  while ( n > 0 ) {
		
		cifra = n % 10;
		
		if ( estePrim(cifra) ) {
			count++;
		}
					
		n = n / 10;
		
	  }
		   
	  cout << "Numarul cifrelor prime este: " << count;

}