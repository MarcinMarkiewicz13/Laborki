// zad 5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int rok;
    cout << "Podaj rok: ";
    cin >> rok;
    if ((rok % 4 == 0 and rok % 100 != 0) or rok % 400 == 0) {
        cout << "Jest to rok przestepny" << "\n";
    }
    else {
        cout << "Nie jest to rok przestepny" << "\n";
    }
    int Ilosc;
    for (Ilosc = 0; rok > 0; rok--) {
        if ((rok % 4 == 0 and rok % 100 != 0) or rok % 400 == 0) {
            Ilosc++;
        }
    }
    cout << "Bylo " << Ilosc << " lata przestepne.";
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
