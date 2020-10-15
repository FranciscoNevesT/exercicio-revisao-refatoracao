#include <string>
#include "Empregado.hpp"
#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string nomeI, double salarioHoraI , int projetosI){
    nome = nomeI;
    projetos = projetosI;
    salarioHora = salarioHoraI;
}
