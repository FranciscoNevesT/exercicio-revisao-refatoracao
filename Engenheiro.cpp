#include <string>
#include "Empregado.hpp"
#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string nomeI, int projetosI, double salarioHoraI){
    nome = nomeI;
    projetos = projetosI;
    salarioHora = salarioHoraI;
}
