/* Un numar se numeste PERFECT daca este egal cu suma divizorilor sai mai putin el insusi.  
   Exemple de numere perfecte: 6, 28, 496, 8128
*/
#include <iostream>
using namespace std;

int main()
{
          
	  int numar = 8128;
	  int s = 1;
	  int d;
	  
	  for ( int d = 2; d <= numar / 2; d++ ) {
		if ( numar % d == 0 ) {
			s += d;
		}
	  }
	  
	  if ( s == numar ) {
		  
		cout << "PERFECT";
	  
	  } else {
		
		cout << "IMPERFECT";
	  
	  }

}