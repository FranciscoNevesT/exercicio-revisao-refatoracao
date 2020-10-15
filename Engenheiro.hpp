#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
  private:
    std::string nome;  
	  int projetos;


  public:
    Engenheiro(std::string nomeI, int projetosI, double salarioHoraI);
    Engenheiro();
	
};

