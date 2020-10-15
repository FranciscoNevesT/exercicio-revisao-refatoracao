#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
  private:
    double salarioHora;
    double quotaMensalVendas;

  public:

    double pagamentoMes(double horasTrabalhadas);

#endif
