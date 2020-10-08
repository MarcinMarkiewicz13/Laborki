// zad 2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>


using namespace std;
int main()
{
	int a1, b1, a2, b2, c1, c2;  // a1x + b1y =c1     a2x+b2y=c2
	cout << "a1: " ;
	cin >> a1;
	cout << "b1: " ;
	cin >> b1;
	cout << "c1: " ;
	cin >> c1;
	cout << "a2: " ;
	cin >> a2;
	cout << "b2: " ;
	cin >> b2;
	cout << "c2: " ;
	cin >> c2;
	double W = a1 * b2 - a2 * b1;
	double Wx = c1 * b2 - c2 * b1;
	double Wy = a1 * c2 - a2 * c1;
	if (W == 0 and Wx == 0 and Wy == 0) {
		cout << "Uklad nieoznaczony, nieskonczenie wiele rozwiazan" << "\n";
	}
	else if (W != 0) {
		double x = Wx / W;
		double y = Wy / W;
		cout << "Uklad oznaczony, x = " << x << " i y = " << y << "\n";
	}
	else { 
		cout << "Uklad sprzeczny, brak rozwiazania";

		
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
