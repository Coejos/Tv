#ifndef DATA_HPP
#define DATA_HPP

class Data
{
public:
	Data(int=1, int=1, int=1);
	~Data();

private:
int mes;
int dia;
int ano;
int ChecarDia(int ) const;
};

#endif // DATA_HPP
