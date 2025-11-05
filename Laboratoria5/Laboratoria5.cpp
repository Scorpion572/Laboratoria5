#include <iostream>
#include <vector>
using namespace std;
int srednia(int tab[]);
void wypisanie(int tab[],float srednia);
int znajdz_max(int tab[]);
int znajdz_min(int tab[]);
void wypisaniemacierzy(vector<vector<int>>& macierz, int wiersz, int kolumna);
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

	/*int liczba;						//zad 2
	cout << "Podaj ktora liczbe fibonachiego chcesz uzyskac ";
	cin >> liczba;
	vector <int> tab(liczba);						//dynamiczna tablica
	tab[0] = 0;
	tab[1] = 1;
	for (int i = 2; i < liczba; i++) {				//liczby fibonachiego
		tab[i] = tab[i - 1] + tab[i - 2];
	}
	cout << "liczba fibonachiego to: " << tab[liczba - 1] + tab[liczba - 2] << endl;*/







	/*int  tab[10];											//zad 3 
	srand(time(NULL));
	for (int i = 0; i <= 9; i++) {
		tab[i] = rand();
	}
	cout << "srednia wylosowanych liczb : " << srednia(tab) << endl;
	wypisanie(tab, srednia(tab));
	cout << "Max: " << znajdz_max(tab) << endl;
	cout << "Min: " << znajdz_min(tab) << endl;*/

	int wiersz, kolumna;									//zad 4
	cout << "Podaj liczbe wierszy: ";
	cin >> wiersz;	
	cout << "Podaj liczbe kolumn: ";	
	cin >> kolumna;
	vector<vector<int> > macierz(wiersz, vector<int>(kolumna));
	for (int i = 0; i < wiersz; i++) {
		for(int j = 0; j< kolumna ; j++){
			cout << "Podaj element macierzy w miejscu [" << i << "][" << j << "]: ";
			cin >> macierz[i][j];
		}
		 
	}
	wypisaniemacierzy(macierz, wiersz, kolumna);
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
	cout << "Liczby mniejsze od sredniej to: " << endl;
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
void wypisaniemacierzy(vector<vector<int>>& macierz, int wiersz, int kolumna){
	for (int i = 0; i < wiersz; i++) {
		for (int j = 0; j < kolumna; j++) {
			cout << macierz[i][j] << " ";
		}
		cout << endl;
	}
}