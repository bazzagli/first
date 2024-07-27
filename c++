/*carlos pazzagli
30.05.2024*/

#include <iostream>
using namespace std;



int main()
{
    //dichiarazione delle variabili//
    int N, numero, conta;
    
	do{
		cout << "quanti numeri vuoi inserire?";//scrittura
		cin >> N;//dichiarazione variabile
	
	} while(!(N>3));
	
	int somma=0; //variabile d'appoggio
	for (int conta=1;conta<=N;conta++)
	{
		cout<< "inserisci il numero";
		cin>> numero;
		if(numero%3==0)
		  somma =somma+numero;
	}
	
      //stampa dei risultato
      cout<< endl<< "la somma dei numeri inseriti ="<<somma;

    return 0;
}
