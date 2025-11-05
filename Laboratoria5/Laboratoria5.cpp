#include <iostream>
#include <vector>
using namespace std;
float srednia(int tab[]);
void wypisanie(int tab[],float srednia);
int znajdz_max(int tab[]);
int znajdz_min(int tab[]);
void wypisaniemacierzy(vector<vector<int>>& macierz, int wiersz, int kolumna);
void wprowadzanieniemacierzy(vector<vector<int>>& macierz, int wiersz, int kolumna);
void sumowaniemacierzy(vector<vector<int>>& macierz1, vector<vector<int>>& macierz2, vector<vector<int>>& macierz3, int rozmiar);
void mnozeniemacierzy(vector<vector<int>>& macierz1, vector<vector<int>>& macierz2, vector<vector<int>>& macierz3, int rozmiar);
int przekatna_macierzy(vector<vector<int>>& macierz, int rozmiar);
void sortowanie_babelkowe(int tablica[]);
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

	/*	int wiersz, kolumna;									//zad 4
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
		wypisaniemacierzy(macierz, wiersz, kolumna);*/

		/*int tablica[10];					//zad 5
		int liczba = 0;
		cout << "ile liczb z zakresu od 0 do 10 chcesz podac (max 10): ";
		cin >> liczba;
		if (liczba <= 10 && liczba >= 0) {
			for(int i = 0; i < liczba; i++) {
				cout << "Podaj " << i+1 << " liczbe: \n";
				cin >> tablica[i];
			}
			for(int i = liczba; i < 10; i++) {
				tablica[i] = 0;
			}
		}

		else {
			cout << "podana liczba nie jest w zakresie 0-10" << endl;
		}
		cout << "srednia liczb na tej tablicy = " << srednia(tablica) << endl;
		cout << "Max: " << znajdz_max(tablica) << endl;
		cout << "Min: " << znajdz_min(tablica) << endl;*/


		/*int tablica[10];					//zad 6
		srand(time(NULL));
		for (int i = 0; i < 10; i++) {
			tablica[i] = rand() % 11 ;		//losowanie liczb z zakresu 0 do 10
		}
		int szczesliwa_liczba= rand() % 11 ;
		int licznik = 0;
		for (int i= 0;i<=9;i++) {
			if(tablica[i]== szczesliwa_liczba) {
				licznik++;
			}
		}
		cout << "Szczesliwa liczba to: " << szczesliwa_liczba << " i zostala wylosowana " << licznik << " razy" << endl;*/

		/*int rozmiar;							//zad 7
		cout << "Podaj rozmiar macierzy: ";
		cin >> rozmiar;
		vector<vector<int>> macierz1(rozmiar, vector<int>(rozmiar));
		vector<vector<int>> macierz2(rozmiar, vector<int>(rozmiar));
		vector<vector<int>> macierz3(rozmiar, vector<int>(rozmiar));
		cout << "Wprowadz elementy pierwszej macierzy: " << endl;
		wprowadzanieniemacierzy(macierz1, rozmiar, rozmiar);
		cout << "Wprowadz elementy drugiej macierzy: " << endl;
		wprowadzanieniemacierzy(macierz2, rozmiar, rozmiar);
		sumowaniemacierzy(macierz1, macierz2, macierz3, rozmiar);
		cout << "Macierz wynikowa to: " << endl;
		wypisaniemacierzy(macierz3, rozmiar, rozmiar);	*/

		/*int rozmiar;							//zad 8
		cout << "Podaj rozmiar macierzy: ";
		cin >> rozmiar;
		vector<vector<int>> macierz1(rozmiar, vector<int>(rozmiar));
		vector<vector<int>> macierz2(rozmiar, vector<int>(rozmiar));
		vector<vector<int>> macierz3(rozmiar, vector<int>(rozmiar));
		cout << "Wprowadz elementy pierwszej macierzy: " << endl;
		wprowadzanieniemacierzy(macierz1, rozmiar, rozmiar);
		cout << "Wprowadz elementy drugiej macierzy: " << endl;
		wprowadzanieniemacierzy(macierz2, rozmiar, rozmiar);
		mnozeniemacierzy(macierz1, macierz2, macierz3, rozmiar);
		cout << "Macierz wynikowa to: " << endl;
		wypisaniemacierzy(macierz3, rozmiar, rozmiar);*/

		/*int rozmiar;							//zad 9
		cout << "Podaj rozmiar macierzy: ";
		cin >> rozmiar;
		vector<vector<int>> macierz(rozmiar, vector<int>(rozmiar));
		cout << "Wprowadz elementy macierzy: " << endl;
		wprowadzanieniemacierzy(macierz, rozmiar, rozmiar);
		cout << "suma elementow przekatnej macierzy to: ";
		przekatna_macierzy(macierz, rozmiar);
		cout << "suma przekatnej na tej macierzy to "<<przekatna_macierzy(macierz, rozmiar) << endl;*/

	int tablica[10];					//zad 10
	cout << "Podaj 10 liczb calkowitych: " << endl;
	for (int i = 0; i < 10; i++) {
		cin >> tablica[i];
	}
	sortowanie_babelkowe(tablica);
	cout << "Posortowana tablica to: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << tablica[i] << endl;
	}
}


float srednia(int tab[]) {
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
void wprowadzanieniemacierzy(vector<vector<int>>& macierz, int wiersz, int kolumna) {
	for (int i = 0; i < wiersz; i++) {
		for (int j = 0; j < kolumna; j++) {
			cout << "Podaj element macierzy w miejscu [" << i << "][" << j << "]: ";
			cin >> macierz[i][j];
		}
	}
}
void sumowaniemacierzy(vector<vector<int>>& macierz1, vector<vector<int>>& macierz2, vector<vector<int>>& macierz3, int rozmiar){
	for (int i = 0; i < rozmiar; i++) {
		for (int j = 0; j < rozmiar; j++) {
			macierz3[i][j] = macierz1[i][j] + macierz2[i][j];
		}
	}
}
void mnozeniemacierzy(vector<vector<int>>& macierz1, vector<vector<int>>& macierz2, vector<vector<int>>& macierz3, int rozmiar){
	for (int i = 0; i < rozmiar; i++) {
		for (int j = 0; j < rozmiar; j++) {
			macierz3[i][j] = macierz1[i][j] * macierz2[i][j];
		}
}
}
int przekatna_macierzy(vector<vector<int>>& macierz, int rozmiar) {
	int suma = 0;
	for (int i = 0; i < rozmiar; i++) {
		suma =suma+ macierz[i][i];
	}
	return suma;
}
void sortowanie_babelkowe(int tablica[]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (tablica[j] > tablica[j + 1]) {
				int temp = tablica[j + 1];
				tablica[j + 1] = tablica[j];
				tablica[j] = temp;
			}
		}
	}
}