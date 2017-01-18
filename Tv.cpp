#include "Tv.h"
#include <iostream>
using std::cout;

int Tv::volume=100;

Tv::Tv()
{
    
}

Tv::Tv(const Tv &t)
{
    canal= t.canal;
    program=t.program;

    
}

Tv::~Tv()
{
}

void Tv::BloquearCanal() const
{
    cout<<"Canal bloqueado";
}

