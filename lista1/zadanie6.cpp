#include <iostream>

using namespace std;

int main() {
    int x = 1;
    int y = x++;
    int z = --y + x;
    int v = z += 2;
    cout << x << "\n";
    cout << y << "\n";
    cout << z << "\n";
    cout << v << "\n";
    return 0;
}

//WYNIKI DZIALANIA PROGRAMU:
//2
//0
//4
//4