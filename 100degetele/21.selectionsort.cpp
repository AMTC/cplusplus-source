/* 
	Selectionsort cauta cel mai mic element al matricei si il pune la locul lui. 
*/
#include <iostream>
using namespace std;

void selectionSort(int matrice[]) {
		
	int n = 6;
	int index;
	int celmaimic;
	
	for ( int i = 0; i <= n; i++) {
		
		index = i;
		for ( int j = i + 1; j <= n; j++) {
			
			if ( matrice[j] < matrice[index]) {
				
				index = j;
				
			}
		}
		
		celmaimic = matrice[index];
		matrice[index] = matrice[i];
		matrice[i] = celmaimic;
		
		for ( int i = 0; i <= 6; i++) {
			
			cout << matrice[i] <<  "_";
			
		}
		
		cout << endl << endl;
	}
}
	
int main()
{
		
		//declaratie
		int matrice[] = {90, 68, 45, 33, 23, 17, 6};

		cout << "Matricea inainte de Selectionsort este: " << endl;
		
		for ( int i = 0; i <= 6; i++) {
			
			cout << matrice[i] <<  "_";
			
		}
		cout << endl;
		
		selectionSort(matrice);
		
		
       	cout << "Matricea dupa Selectionsort este: " << endl;
		
			
		for ( int i = 0; i <= 6; i++) {
			
			cout << matrice[i] << "_";
			
		}
		
}