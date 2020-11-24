#include <cmath>
#include <iostream>
using namespace std;

/*
program that rounds decimals numbers into whole numbers
*/

int main()
{
    double num1, risultato;
    while (num1 != 0) {

        cout << "Dammi il numero da convertire (inserisci 0 per bloccare il programma) ";
        cin >> num1;
        if (num1 != 0) {
            risultato = round(num1);
            cout << "se arrotondo " << num1 << " risulta " << risultato << endl;
        } else {
            return 0;
        }
    }
}