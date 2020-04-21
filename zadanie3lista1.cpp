#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double t = 1 / sqrt(3);
    double t1;
    
    for (int i =0; i<30; i++)     //PODPUNKT A b³¹d wzrasta
    {
        if (i == 0) cout << i << ": " << 6 * pow(2, i) * t << endl;
        t1 = ( sqrt( pow(t, 2) + 1) - 1 ) / t;
        cout << i + 1 << ": " << 6 * pow(2, i+1)* t1 << endl;
        t=t1;
    }
    cout << endl;
    
    
    t = 1 / sqrt(3);
    for (int i =0; i<30; i++)		//PODPUNKT B b³¹d maleje
    {
        if (i == 0) cout << i << ": " << 6 * pow(2, i) * t << endl;
        t1 = t / ( sqrt(pow(t, 2) + 1) + 1 );
        cout << i + 1 << ": " << 6 * pow(2, i+1)* t1 << endl;
        t=t1;
    }
    
   
    
    return 0;
}
