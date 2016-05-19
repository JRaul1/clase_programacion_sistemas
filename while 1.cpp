#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
// presentar los numeros del 1 al 10
int contador, suma, mayor;
int numero, menor;


int main()
{   srand(time(0));
    contador = 0;
    suma=0;
    menor=100;
    mayor=0;
    while(contador <10)
    {   numero = 1 + rand() % (100-1);
    suma=suma+ numero;
    // suma+=numero;
    if (mayor < numero)
    {
        mayor= numero;
    }
    if (menor > numero)
    {
        menor=numero;
    }
        contador++;
        cout << contador << "Numero" << numero << "\n";

    }
    cout<<"Numero Mayor..."<<mayor<<"\n";
    cout<<"Numero Menor..."<<menor<<"\n";
    cout<<"Suma de los numeros es..."<< suma<<"\n";
    cout<<"Final del programa"<<"\n";
}
