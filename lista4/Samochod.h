#include <iostream>
class Samochod
{
  public:
     Samochod(int n)
    {
      _kola = n;
      _sruby = 4*_kola;
      std::cout << "Samoch�d z " << _kola << " kolami i " << _sruby << " srubami \n";
    }
    
  private:

    int _sruby;
    int _kola;

  
};
