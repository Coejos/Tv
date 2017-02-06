#include "Data.hpp"

Data::Data()
{
}

Data::~Data()
{
	delete [] ChecarDia();
}

int Data::ChecarDia(int dia) const
{
	static const int diaMes[13]={0,31,28,31,30,31,30,31,30,31,30,31};
	if(dia>0 && dia<=diaMes[mes])
		return dia;
	if(mes==2&& dia==29 &&(ano%400==0 ||(ano%4==0 && ano %100!=0)))	
		return dia;
	count<<"Dia inválido.\n"	;
	return1;
}

