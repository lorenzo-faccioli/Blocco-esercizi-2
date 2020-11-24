#include <iostream>
using namespace std;

/* program that calculates the biggest number between those given by the user
*/

int main()
{
    int NumTotale, NumInput, NumMAX = 0;

    cout << "dimmi quanti numeri vuoi inserire ";
    cin >> NumTotale;

    for (int i = 0; i < NumTotale; i++) {
        cout << "dammi il numero numero " << i + 1 << endl;
        cin >> NumInput;

        if (NumInput > NumMAX) {
            NumMAX = NumInput;
        } else if (NumInput == NumMAX) {
            NumMAX = NumMAX;
        } else {
            NumMAX = NumMAX;
        }
    }
        cout << "il numero più grande tra quelli che hai inserito vale " << NumMAX;
        return 0;
    
}