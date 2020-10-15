#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"
#include <iostream>

class Engenheiro : public Empregado {
  protected:
	  int projetos;

  public:
    Engenheiro(std::string nomeI, double salarioHoraI , int projetosI, double horasTI );

    friend std::ostream &operator<<(std::ostream &output, Engenheiro *&eng ) { 
        output << "Nome: " << eng->nome << std::endl;
        output << "Salario Mes: " << eng->pagamentoMes(eng->horasT) << std::endl;
        output << "Projetos: " << eng->projetos << std::endl;
        return output;            
    }
	
};


#endif