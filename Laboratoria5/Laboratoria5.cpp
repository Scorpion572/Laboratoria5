#include <iostream>
using namespace std;
int main()
{
	int tab[10];	//zad 1
	for (int i = 1; i <= 10; i++) {
		cout << "podaj liczbe \n";
		cin >> tab[i - 1];
	}
	for (int i = 1; i <= 10; i++) {
		cout << tab[10 - i] << endl;
	}
}

