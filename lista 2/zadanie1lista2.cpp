#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int SmallestEl(vector <int> vector)
{
    if (vector.empty())
    {
        return INT8_MIN;
    }
    else 
    {
        int min = *min_element(vector.begin(), vector.end());
        return min;
    }
}

int main()
{
    vector<int> v = {7, 5, 16, 8};
    cout << SmallestEl(v) << endl;
    return 0;
}
