#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
  protected:
    double salarioHora;
    double horasT;
    double quotaMensalVendas;
    std::string nome;  

  public:
    double pagamentoMes(double horasTrabalhadas);

    double getSalarioHora(){return salarioHora;}
    void  setSalarioHora(double salarioHoraNovo){salarioHora = salarioHoraNovo;}

};
#endif
