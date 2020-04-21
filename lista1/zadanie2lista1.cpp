#include <cmath>
using namespace std;



double podpunktA(int n) {
    double ans = 0;
    for(int i = 1; i <= n; i++)
    {
        ans += 4 * ((pow(-1, i+1)) / (2*i - 1));
    }
    return ans;
}


double podpunktB(int n) {
    double ans = 1;
    for(int i = 1; i <= n; i++)
    {
        ans *= ((4 * pow(i, 2)) / ((4*pow(i, 2)) - 1));
    }
    return 2 * ans;
}


double podpunktC(int n) {
    double ans = 0;
    for(int i = 1; i <= n; i++)
    {
        ans += 1 / pow(2*i - 1, 2);
    }
    return sqrt(8 * ans);
}

double porownanie(double x, double y)
{
    cout << "Porównanie z wartością PI: " << x - y << endl;
    return (x-y);
}

int main()
{
    const int n = 1000000;
    cout << "PODPUNKT A: " << podpunktA(n) << endl;
    porownanie(podpunktA(n), M_PI);
    cout << "PODPUNKT B: " << podpunktB(n) << endl;
    porownanie(podpunktB(n), M_PI);
    cout << "PODPUNKT C: " << podpunktC(n) << endl;
    porownanie(podpunktC(n), M_PI);
    return 0;
}
//WYNIKI DZIALANIA PROGRAMU
//  PODPUNKT A: 3.14159
//  Porównanie z wartością PI: -1e-006
//  PODPUNKT B: 3.14159
//  Porównanie z wartością PI: -7.85398e-007
//  PODPUNKT C: 3.14159
//  Porównanie z wartością PI: -3.1831e-007
