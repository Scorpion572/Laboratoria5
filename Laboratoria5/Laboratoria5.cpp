#include <iostream>
using namespace std;
int srednia(int tab[]);
void wypisanie(int tab[],float srednia);
int znajdz_max(int tab[]);
int znajdz_min(int tab[]);
int main()
{
	/*int tab[10];	//zad 1
	for (int i = 1; i <= 10; i++) {
		cout << "podaj liczbe \n";
		cin >> tab[i - 1];
	}
	for (int i = 1; i <= 10; i++) {
		cout << tab[10 - i] << endl;
	}*/









	int  tab[10];											//zad 3 cos jest nie tak
	srand(time(NULL));
	for (int i = 0; i <= 9; i++) {
		tab[i] = rand();
	}
	cout << srednia(tab) << endl << wypisanie(tab, srednia(tab)) << endl;
	cout << "Max: " << znajdz_max(tab) << endl;
	cout << "Min: " << znajdz_min(tab) << endl;
}
int srednia(int tab[]) {
	float srednia = 0;
	for (int i = 0; i <= 9; i++) {
		srednia = tab[i] + srednia;
	}
	return srednia / 10;
}

void wypisanie(int tab[], float srednia) {
	int licznik = 0;
	for (int i = 0; i <= 9; i++) {
		if (tab[i] < srednia) {
			cout << tab[i] << endl;
			licznik++;
		}
	}
	cout << "Liczba elementow mniejszych od sredniej to: " << licznik << endl;
}
		

int znajdz_max(int tab[]) {
	int max = tab[0];
	for (int i = 1; i <= 9; i++) {
		if (tab[i] > max) {
			max = tab[i];
		}
	}
	return max;
}
int znajdz_min(int tab[]) {
	int min = tab[0];
	for (int i = 1; i <= 9; i++) {
		if (tab[i] < min) {
			min = tab[i];
		}
	}
	return min;
}