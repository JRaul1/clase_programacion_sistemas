#include <iostream>

using namespace std;
int num1, num2, num3;

int main()
{
    cout << "Introducir numero...";
    cin >> num1;

    cout << "Introducir numero...";
    cin >> num2;

    cout << "Introducir numero...";
    cin >> num3;

    if (num1 <= num2 && num1 <= num3)
    {
        if (num2 <= num3)
        {
            cout << "Esta ordenado ascendentemente";
        }
    }
    else
    {
        cout << "No esta ordenado ascendentemente";
    }
    return 0;
}
