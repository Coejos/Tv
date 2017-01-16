#ifndef TV_H
#define TV_H

class Tv
{
    
private:
    int canal, volume;
    char programa;
    
public:
    Tv();
    ~Tv();
    void DesligarTv();
    void GravarPrograma();
    void Tv(tv  Tv);
    void Tv();

};

#endif // TV_H
