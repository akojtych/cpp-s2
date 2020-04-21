#include <iostream>
#include <vector>
using namespace std;



void Zerowanie(vector <double> vector)
{
    if(!vector.empty())
    {
        fill(vector.begin(), vector.end(), 0);
    }
    for(auto i : vector)
    {
        cout << i << " ";
    }
}

int main()
{
    vector<double> v = {7.5, 5.5, 16, 8};
    Zerowanie(v);
    return 0;
}
