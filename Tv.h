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
    
private:

    int canal;
    static int volume;
    string program;
    const string bloq;
    
    
    
    


};

#endif // TV_H
