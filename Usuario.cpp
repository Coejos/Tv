#include "Usuario.h"
#include <iostream>

Usuario::Usuario()
{
	this->nome=nome;
	this->cpf=cpf;
	this->ano=ano;
}

Usuario::~Usuario()
{
	delete[] CadastrarUsuario();
}

ostream &operator<<(ostream &output, const Usuario & codigoUsuario)
{
    output<<"("<<codigoUsuario.ano<<")"
          <<codigoUsuario.cpf;
          return output;
}

void Usuario::CadastrarUsuario(int cpf, string &nome)
{
	this->nome= nome;
	this->cpf=cpf;
	count<<"Usuário Cadastrado com Sucesso"<<
	
}




