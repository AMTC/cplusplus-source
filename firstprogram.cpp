#include <iostream>
using namespace std;

int main()
{
    int intNumar;
    cin >> intNumar;
    
    for (int i = 0; i <= 25; i = i + 1) {
        
        if (i > intNumar) {
             cout << i << "\n";
        }
    }

    return 0;
}
