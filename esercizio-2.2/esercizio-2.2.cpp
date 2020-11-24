#include <iostream>
using namespace std;

/* program that individuates a specific number out of a bigger one 
*/ 
 

int cifraSpecifica (int * a[], int x);

int main (){
    int cifra, valore, risultato;
    
    cout<<"quanto vuoi che sia lungo il numero?";
    cin>> valore;
    int * Num;
    Num= new int [valore];
    
    for(int i=0; i<valore; i++){
        cout<<"Dammi la cifra "<<i+1;
        cin>> Num[i];
    }
    cout<<"il tuo numero vale: ";
    
    for(int i=0; i<valore; i++){
    cout<<Num[i];
    }
    cout<<"quale cifra vuoi? ";
    cin>> cifra;

    risultato=cifraSpecifica(Num[valore], cifra);
    cout<<"la cifra che cerchi vale "<<risultato;
    delete [] Num;
return 0;
}


int * cifraSpecifica(int * a[] ,int cifra){
    int *ritorno;
    ritorno=new int;

    ritorno=a[cifra-1];
    
return ritorno;
delete ritorno;
    
}
