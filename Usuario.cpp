#include "Usuario.hpp"
#include <iostream>
Usuario::Usuario()
{
}

Usuario::~Usuario()
{
}

ostream &operator<<(ostream &output, const Usuario & codigoUsuario)
{
    output<<"("<<codigoUsuario.ano<<")"
          <<codigoUsuario.cpf;
          return output;
}


