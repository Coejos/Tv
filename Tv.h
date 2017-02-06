#ifndef TV_H
#define TV_H
#include "string"

using std::string;
class Tv
{
   
public:

    Tv(const Tv &);
    Tv();
    ~Tv();
    void DesligarTv();
    void GravarPrograma();
    
    void BloquearCanal() const;
    void DesbloquearCanal();
    void AddCanal(int canal);
    
private:

    int canal;
    int qntCanal;
    const static int volume=50;///atributo static const
    string program;
    const string bloq;
    string *listaCanal;
    
    
    
    


};

#endif // TV_H
