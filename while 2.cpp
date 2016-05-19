#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
// presentar los numeros del 1 al 10
int contador, con50, suma, mayor;
int numero, menor, suma50, prome50;


int main()
{   srand(time(0));
    contador = 0;
    suma=0; con50=0;
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
    if (numero>50)
        {
            con50++;
            suma50+=numero;
        }
        contador++;
        cout << contador << "Numero" << numero << "\n";

    }
    prome50= suma/con50;
    cout<<"Numero Mayor..."<<mayor<<"\n";
    cout<<"Numero Menor..."<<menor<<"\n";
    cout<<"Numeros mayores a 50..."<<con50<<"\n";
    cout<<"Suma de los numeros es..."<< suma<<"\n";
    cout<<"Promedio mayores a 50..."<<prome50<<"/n";
    cout<<"Final del programa"<<"\n";
}
