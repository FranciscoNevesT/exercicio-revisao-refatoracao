#ifndef VENDERDOR_H
#define VENDERDOR_H

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

	public:

	double quotaTotalAnual() {
	  return quotaMensalVendas * 12;
	}
    Vendedor(std::string nomeI, double salarioHoraI , int quotaMensalVendasI );

    friend std::ostream &operator<<(std::ostream &output, Vendedor *&vend ) { 
        output << "Nome: " << vend->nome << std::endl;
        output << "Salario Mes: " << vend->pagamentoMes(6) << std::endl;  
        output << "Quota vendas: " << vend->quotaTotalAnual() << std::endl;
        output << std::endl;
        return output;            
    }
	
};

#endif