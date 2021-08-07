/*
Se citesc 3 numere naturale z l a, reprezentand o data calendaristica in format zi luna an. Sa se afiseze data zilei anterioare.
Exemple:
4 5 2000 => 3 5 2000
1 2 2000 => 31 1 2000
1 3 1999 => 28 2 1999
*/

#include <iostream>
using namespace std;

int main()
{
    int z,l,a;
    cin >> z >> l >> a;
    
	if(z>1) z--;
	
    else
    {
        l--;
		
        if(l==0) {z=31;l=12; a--;}
        else if(l==1 || l==3 || l==5 || l==7 || l==8 || l==10)
                 z=31;
             
			 else if(l==4 || l==6 || l==9 || l==11)
                     z=30;
				 
                  else if(a%4==0 && a%100!=0 || a%400==0) z=29;
                       else z=28;
    }
	
    cout << z << " " << l << " " << a;
	
    return 0;
}