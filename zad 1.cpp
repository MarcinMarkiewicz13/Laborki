// zad 1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>


int main()
{
	int a,b;
	std::cout << "podaj pierwsza liczbę: ";
	std::cin >> a;
	std::cout << "podaj drugą liczbe: ";
	std::cin >> b;
	int suma = a + b;
	int roznica = a - b;
	int iloczyn = a * b;
	int suma_bitowa = a | b;
	int iloczyn_bitowy = a & b;
	int roznica_symetryczna = a ^ b;
	int przesuniecie = a << b;
	int reszta = a % b;

	std::cout << "Suma rowna jest: " << suma << std::endl;
	std::cout << "Roznica rowna jest: " << roznica << std::endl;
	std::cout << "Iloczyn rowny jest: " << iloczyn << std::endl;
	std::cout << "Suma bitowa rowna jest: " << suma_bitowa << std::endl;
	std::cout << "Iloczyn bitowy rowny jest: " << iloczyn_bitowy << std::endl;
	std::cout << "roznica symetryczna rowna jest: " << roznica_symetryczna << std::endl;
	std::cout << "Przesuniecie rowne jest: " << przesuniecie << std::endl;
	std::cout << "Reszta z dzielenia rowna jest: " << reszta << std::endl;

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
