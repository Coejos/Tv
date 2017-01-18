#include "Tv.h"
#include <iostream>


using std::cout;


Tv::Tv(const string bloq, int canal)
{
    this->bloq= bloq;
    
    if(bloq=='1')
        BloquearCanal(this->canal);
        else
            DesbloquearCanal(this->canal);
            
           
  }

Tv::~Tv()
{
}

void Tv::Tv()
{
    cout<<" Desligando em 3, 2,..."<<;
}



