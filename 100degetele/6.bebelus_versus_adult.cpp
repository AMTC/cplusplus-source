/* 6.Sa se citeasca varsta numar intreg de la tastatura si sa se afiseze in functie de varsta mesajul "bebelus" (0-3 ani), "prescolar" (3-6 ani), "elev" (6-18 ani), "adult" (peste 18 ani).  */

#include <iostream>
using namespace std;

int main()
{
		
		//declaratie
		int varsta;
        cin >> varsta;
		
		if ( varsta < 3 ) {
			cout << "Bebelus";
		} else if ( varsta < 7 ) {
			cout << "Prescolar";
		} else if ( varsta < 18 ) {
			cout << "Elev";
		} else {
			cout << "Adult";
		}
		      
}