#ifndef USUARIO_HPP
#define USUARIO_HPP
#include "string"
#include <iostream>

using std::ostream;

using std::string;

class Usuario
{
    friend ostream &operator<<(ostream &, const Usuario &);
    friend istream &operator>>(istream &, Usuario &);

private:
string nome;
int ano;
int cpf;

public:
    Usuario();
    ~Usuario();
	void CadastrarUsuario( int , string &);//metodo 1
	

};

#endif // USUARIO_HPP
