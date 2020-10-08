// zad 4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    int data;
    cout << "Wprowadz dzien roku: ";
    cin >> data;
    if (data > 0 and data <= 31) {
       int miesiac = 1;
       cout << "Jest: " << data << "." << miesiac << "\n";
    }
    else if (data >= 32 and data <= 59) {
        int miesiac = 2;
        int dzien = data - 31;
        cout << "jest: " << dzien << "." << miesiac << "\n";
    }
    else if (data >= 60 and data <= 90) {
        int miesiac = 3;
        int dzien = data - 59;
        cout << "jest: " << dzien << "." << miesiac << "\n";
    }
    else if (data >= 91 and data <= 120) {
        int miesiac = 4;
        int dzien = data - 90;
        cout << "jest: " << dzien << "." << miesiac << "\n";
    }
    else if (data >= 121 and data <= 151) {
        int miesiac = 5;
        int dzien = data = 120;
        cout << "jest: " << dzien << "." << miesiac << "\n";
    }
    else if (data >= 152 and data <= 181) {
        int miesiac = 6;
        int dzien = data - 151;
        cout << "jest: " << dzien << "." << miesiac << "\n";
    }
    else if (data >= 182 and data <= 212) {
        int miesiac = 7;
        int dzien = data - 181;
        cout << "jest: " << dzien << "." << miesiac << "\n";
    }
    else if (data >= 213 and data <= 243) {
        int miesiac = 8;
        int dzien = data - 212;
        cout << "jest: " << dzien << "." << miesiac << "\n";
    }
    else if (data >= 244 and data <= 273) {
        int miesiac = 9;
        int dzien = data - 243;
        cout << "jest: " << dzien << "." << miesiac << "\n";
    }
    else if (data >= 274 and data <= 304) {
        int miesiac = 10;
        int dzien = data - 273;
        cout << "jest: " << dzien << "." << miesiac << "\n";
    }
    else if (data >= 305 and data <= 334) {
        int miesiac = 11;
        int dzien = data - 304;
        cout << "jest: " << dzien << "." << miesiac << "\n";
    }
    else if (data >= 335 and data <= 365) {
        int miesiac = 12;
        int dzien = data - 334;
        cout << "jest: " << dzien << "." << miesiac << "\n";
    }
    else {
        cout << "Blad.";
    }
    return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
