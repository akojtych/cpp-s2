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
//typ unsigned mo�e przyj�� tylko warto�� nieujemn�, jest to b��d zwi�zany z przeci��eniem pami�ci 
