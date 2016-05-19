#include <iostream>
#include <stdlib.h>

using namespace std;
int numero;

int main()
{
    cout << "ingresar un numero";
    cin>>numero;

    if (numero>0){
        cout<<"es positivo";

    }else if (numero <0)
    {
        cout<<"es negativo";

    }else {
        cout<<"es cero";
    }
}
