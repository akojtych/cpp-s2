#include <iostream>
#include <string.h>
using namespace std;

// musimy rozpatrzyc dwa przypadki gdy kompilator zapisze zmienna temp nad zmienna haslo oraz odwronie
// w pierwszym przypadku gdy haslo zostanie nadpisane(wiecej niz 8) nawet poprawne haslo nie pozwoli na zalogowanie do systemu
//w drugim przypadku w³amiemy sie do systemu lecz otrzymamy b³¹d

int main()
{
	char haslo[8];
    strcpy(haslo,"1234");
    for(;;)
    {
        cout << "podaj haslo: ";
        char tmp[8];
        cin >> tmp;
        cout << strcmp(tmp, haslo);
        if(strcmp(tmp,haslo) == 0)
            break;
        cout << "wpisales zle haslo! \n";
    }
    cout << "witaj w systemie \n";
    return 0;
}
