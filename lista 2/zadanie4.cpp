#include <iostream>

unsigned silnia(unsigned n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * silnia(n-1);
    }
}

int main()
{
    for(int i = 0; i < 5; ++i)
    {
        std::cout << i << "! = " << silnia(i) << "\n";
    }
    silnia(-1);

}
//typ unsigned mo¿e przyj¹æ tylko wartoœæ nieujemn¹, jest to b³¹d zwi¹zany z przeci¹¿eniem pamiêci 
