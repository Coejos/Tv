#ifndef TECNICO_HPP
#define TECNICO_HPP
#include <iostream>
#include "string"

using std::string;
class Tecnico
{
public:
	Tecnico( const Tecnico &); //método cópia
	~Tecnico();
	void AgendarAtendimento();
	void ListarTecnicos()const; ///1 método const
	void CadastrarRegiao();
	
private:
int cod;
string nome;
string regiao[10];
static int qntTec; //atributo static
const static int qntReg=10; //atributo const static 

};

#endif // TECNICO_HPP
