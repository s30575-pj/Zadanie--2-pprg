#include <iostream>

using namespace std;
//Funkcja do podpunktu D//
void drukuj_pelny_prostokat(int n, int m){
	int i, j;
	for (i = 1; i <= n; i++){
		for (j = 1; j <= m; j++){
				cout << "*"; //Zagnieżdżona pętla for drukująca kolumny i wiersze//
		}
		cout << endl;
	}

}
//Funkcja do podpunktu E//
void drukuj_obwod_prostokata(int n,int m){
	int i, j;
	for (i = 1; i <= n; i++){
		for (j = 1; j <= m; j++){
			if (i == 1 || i == n ||
				j == 1 || j == m)
				cout << "*"; //drukowanie * na brzegach prostokata//
			else
				cout << " "; //drukowanie pustego miejsca w srodku prostokata//
		}
		cout << endl;
	}

}
int main()
{
   
	//Zadanie 2.1//
	
	///int n,wynik = 1, ilosc = 1, n = 0; //Deklaracja zmiennej, określającej ilość szeregów //
	///cout << "Podaj ilość szeregów: " << endl;
	///cin >> n;
	///for (int i = 1; i <= ilosc; n++)
	///{
	//	if (i % 2 == 0)
	//		wynik += i;
	//	else
	//		wynik-= i;
	//}
	//cout << wynik;//
	
	//Zadanie 2.2//

	int a, b, i;

	//Podpunkt A//
	cout << "Podaj liczby a i b: " << endl;
	cin >> a >> b;
	cout << "Wartosc liczby a: " << a << ", wartosc liczby b: " << b << endl;

	//Podpunkt B//
	cout << "Wiersz gwiazdek o dlugosci a: " << endl;
	for (i = 0; i < a; i++)
		cout << "*";
	cout << endl;

	//Podpunkt C//
	cout << "Kolumna gwiazdek o wysokości b: " << endl;
	for (i = 0; i < b; i++)
		cout << "*" << endl;

	//Podpunkt D//
	cout << "Wypelniony prostokat gwiazdek o wymiarach a na b: " << endl;
	drukuj_pelny_prostokat(a, b); //Wywolanie funkcji z parametrami a i b//

	//Podpunkt E//
	cout << "Obwod prostokata gwiazdek o wymiarach a na b: " << endl;
	drukuj_obwod_prostokata(a, b); //Wywolanie funkcji z parametrami a i b//

	//Podpunkt F*//
	cout << "Trojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu: " << endl;
	int j;
	for (i = 1; i <= a;i++){
		for (j = 1; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}

	//Podpunkt G*//
	cout << "Trojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu: " << endl;
	for (i = 1; i <= a; i++){
		cout << "*";
		for (j = 1; j <= a; j++){
			
		}
		
	}
	//Zadanie 2.3//
	int liczba;
	cout << "Podaj liczbę z przedzialu [1,12]" << endl;
	cin >> liczba;

	switch (liczba) {
		case 1:
			cout << "Styczen" << endl;
			cout << "Pochmurno" << endl;
			break;
		case 2:
			cout << "Luty" << endl;
			cout << "Pochmurno" << endl;
			break;
		case 3:
			cout << "Marzec" << endl;
			cout << "Pochmurno" << endl;
			break;
		case 4:
			cout << "Kwiecien" << endl;
			cout << "Slonecznie" << endl;
			break;
		case 5:
			cout << "Maj" << endl;
			cout << "Slonecznie" << endl;
			break;
		case 6:
			cout << "Czerwiec" << endl;
			cout << "Slonecznie" << endl;
			break;
		case 7:
			cout << "Lipiec" << endl;
			cout << "Slonecznie" << endl;
			break;
		case 8:
			cout << "Sierpien" << endl;
			cout << "Slonecznie" << endl;
			break;
		case 9:
			cout << "Wrzesien" << endl;
			cout << "Slonecznie" << endl;
			break;
		case 10:
			cout << "Pazdziernik" << endl;
			cout << "Pochmurno" << endl;
			break;
		case 11:
			cout << "Listopad" << endl;
			cout << "Pochmurno" << endl;
			break;
		case 12:
			cout << "Grudzien" << endl;
			cout << "Pochmurno" << endl;
			break;
		default:
			cout << "Wartosc spoza zakresu" << endl;
			break;
	}

	return 0;

}

