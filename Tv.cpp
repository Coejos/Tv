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


///atividade em sala
void Tv::AddCanal(int canal)
{
    string *aux=new string[qntCanal];
    
    for (int i=0; i<qntCanal;i++)
        aux[i]=listaCanal[i];
        
    delete []   listaCanal;
    
listaCanal=new string[++listaCanal]; ///tá com erro não sei pq
    
    for(int i=0; i<qntCanal-1;i++)
        listaCanal[i]=aux[i];
    
     listaCanal[qntCanal-1]=canal;
     
     delete [] aux;
}

