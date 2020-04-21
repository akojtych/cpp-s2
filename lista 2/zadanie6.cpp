#include <iostream>
 #include <conio.h>
 using namespace std;
 
 void WypiszArgumentyWierszaPolecen (int argc, char *argv[]);
 
 int main (int argc, char *argv[]) {   // pierwszy parametr funkcji main - ilosc argumentow w linii polecen, drugi- tablica ³añcuchów znakowych
    WypiszArgumentyWierszaPolecen(argc, argv);
    getch();
 }
 
 void WypiszArgumentyWierszaPolecen (int argc, char *argv[]) {
    cout << "Liczba argumentow w wierszu polecen: " << argc << endl;
    for(int i=0; i<argc; ++i)
       cout << "Element numer " << i << " wiersza polecen ma wartosc: " 
 			<< argv[i] << endl;
 }
 
 // Funkcja WypiszArgumentyWierszaPolecen otrzymuje : Liczbê ³añcuchów znakowych (rozmiar tablicy) jako zmienn¹ argc
//Tablicê ³añcuchów znakowych argv i wypisuje te ³añcuchy w pêtli
