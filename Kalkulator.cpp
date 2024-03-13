#include <iostream>

int dodawanie(int liczba1, int liczba2);
int odejmowanie(int liczba1, int liczba2);
int mnozenie(int liczba1, int liczba2);
int dzielenie(int liczba1, int liczba2);

int main()
{
	int wybor;
	int liczba1, liczba2;

	while (true)
	{
		std::cout << "Oto mozliwe opcje:" << std::endl;
		std::cout << "1. Dodawanie" << std::endl;
		std::cout << "2. Odejmowanie" << std::endl;
		std::cout << "3. Mnozenie" << std::endl;
		std::cout << "4. Dzielenie" << std::endl;
		std::cout << "Wybierz co cie interesuje." << std::endl;
		std::cin >> wybor;
		std::cout << "Podaj pierwsza liczbe" << std::endl;
		std::cin >> liczba1;
		std::cout << "Podaj druga liczbe" << std::endl;
		std::cin >> liczba2;

		switch (wybor)
		{
		case 1:
			std::cout << dodawanie(liczba1, liczba2) << std::endl;
			break;
		case 2:
			std::cout << odejmowanie(liczba1, liczba2) << std::endl;
			break;
		case 3:
			std::cout << mnozenie(liczba1, liczba2) << std::endl;
			break;
		case 4:
			std::cout << dzielenie(liczba1, liczba2) << std::endl;
			break;
		default:
			std::cout << "Nie wybrales zadnej mozliwej opcji! Narazie!";
		}
	}
}

int dodawanie(int liczba1, int liczba2)
{
	return liczba1 + liczba2;
}

int odejmowanie(int liczba1, int liczba2)
{
	return liczba1 - liczba2;
}

int mnozenie(int liczba1, int liczba2)
{
	return liczba1 * liczba2;
}

int dzielenie(int liczba1, int liczba2)
{
	return liczba1 / liczba2;
}