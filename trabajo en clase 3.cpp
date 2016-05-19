#include <iostream>

using namespace std;

int tipoc, cantidad, precio;
float SubTotal, Total;

int main()
{
    cout << "Tipo de cliente...";
    cin >> tipoc;

    cout << "Precio...";
    cin >> precio;

    cout << "cantidad...";
    cin >> cantidad;

    if (tipoc == 1)
    {
        SubTotal = precio * cantidad;
        Total = SubTotal - SubTotal*0.07;

        cout << "Sub Total..." << SubTotal<< "\n" ;
        cout << "Descuento..." << SubTotal*0.07 << "\n";
        cout << "Total..." << Total;
    }

    if (tipoc == 2)
    {
        SubTotal = precio*cantidad;
        Total = SubTotal - SubTotal*0.08;

        cout << "Sub Total..." << SubTotal<< "\n";
        cout << "Descuento..." << SubTotal*0.08 << "\n";
        cout << "Total..." << Total;
    }

    if (tipoc == 3)
    {
        SubTotal = precio*cantidad;
        Total = SubTotal - SubTotal*0.10;

        cout << "Sub Total..." << SubTotal << "\n";
        cout << "Descuento..." << SubTotal*0.10 << "\n";
        cout << "Total..." << Total;
    }
    return 0;
}
