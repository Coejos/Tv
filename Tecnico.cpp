#include "Tecnico.hpp"

int Tecnico::qntTec=0;//atributo static

Tecnico::Tecnico( const Tecnico &tec)
{
	cod=tec.cod;
	nome=tec.nome;
	regiao=tec.regiao[10];
}

Tecnico::~Tecnico()
{
	
}

void Tecnico::ListarTecnicos() const
{
	for(int i=0; i>5; i++)
	{
		count<<" Técnico: "<< this->nome;
	}
	
}

void Tecnico::AgendarAtendimento()
{
	this->nome=nome;
	this->regiao=regiao;
	
    if(qntTec <=5)
		count<<"Agendamento realizado com sucesso"<<
		else
			count<<"Agendamento não foi possível"<<
			
	qntTec++;
	
}
void Tecnico::CadastrarRegiao()
{
    int i=0;
  
   if(sizeof(regiao)< qntReg)
   {
	   this->regiao[i]=regiao;
	   count<<"Região Cadastrada"<<
	   i++;
   }
   else
	   count<<"Região não cadastrada"<<
}



