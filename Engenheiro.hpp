#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H


#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
  protected:
    std::string nome;  
	  int projetos;

  public:
    Engenheiro(std::string nomeI, int projetosI, double salarioHoraI);
    Engenheiro();
	
};


#endif