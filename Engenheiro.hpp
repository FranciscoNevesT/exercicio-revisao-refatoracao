#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
    std::string nome;  
	int projetos;

    Engenheiro(nomeI,salarioI,projetoI);
	
};

