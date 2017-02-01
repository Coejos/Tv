#ifndef USUARIO_HPP
#define USUARIO_HPP
#include "string"
#include <iostream>

using std::string;

class Usuario
{
    friend ostream &operator<<(ostream &, const codigoUsuario &);
    friend istream &operator>>(istream &, codigoUsuario &);

private:
string nome;
int ano, cpf;

public:
    Usuario();
    ~Usuario();

};

#endif // USUARIO_HPP
