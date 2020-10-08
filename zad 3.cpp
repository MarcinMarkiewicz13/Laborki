// zad 3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

    #include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    double a, b, c;
    cout << "podaj a: ";
    cin >> a;
    cout << "podaj b: ";
    cin >> b;
    cout << "podaj c: ";
    cin >> c;
    if (a == 0) {
        double x = -c / b;
        cout << "wynik to " << x << "\n";
    }
    else {
        double delta = b * b - (4 * a * c);
        if (delta == 0) {
            double x = -b / (2 * a);
            cout << "wynik to " << x << "\n";
        }
        else if (delta > 0) {
            double x1 = (-b - sqrt(delta)) / (2 * a);
            double x2 = (-b + sqrt(delta)) / (2 * a);
            cout << "Wynik to " << x1 << " i " << x2 << "\n";
        }
        else {
            cout << "Brak rozwiazania" << "\n";
        }
    }


    return 0;
}