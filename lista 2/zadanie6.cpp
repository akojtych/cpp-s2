#include <iostream>
 #include <conio.h>
 using namespace std;
 
 void WypiszArgumentyWierszaPolecen (int argc, char *argv[]);
 
 int main (int argc, char *argv[]) {   // pierwszy parametr funkcji main - ilosc argumentow w linii polecen, drugi- tablica �a�cuch�w znakowych
    WypiszArgumentyWierszaPolecen(argc, argv);
    getch();
 }
 
 void WypiszArgumentyWierszaPolecen (int argc, char *argv[]) {
    cout << "Liczba argumentow w wierszu polecen: " << argc << endl;
    for(int i=0; i<argc; ++i)
       cout << "Element numer " << i << " wiersza polecen ma wartosc: " 
 			<< argv[i] << endl;
 }
 
 // Funkcja WypiszArgumentyWierszaPolecen otrzymuje : Liczb� �a�cuch�w znakowych (rozmiar tablicy) jako zmienn� argc
//Tablic� �a�cuch�w znakowych argv i wypisuje te �a�cuchy w p�tli
