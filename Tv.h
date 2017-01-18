#ifndef TV_H
#define TV_H

class Tv
{
    const string bloq;

private:
    int canal, volume;
    string program;
    
    
public:
    Tv();
    ~Tv();
    void DesligarTv();
    void GravarPrograma();
    void Tv(tv  Tv);
    void Tv();
    void BloquearCanal();
    void DesbloquearCanal();

};

#endif // TV_H
