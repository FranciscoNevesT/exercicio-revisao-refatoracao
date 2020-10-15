#include "Engenheiro.cpp"
#include "Vendedor.cpp"
#include "Empregado.cpp"

int main() {

  Engenheiro *eng1 = new Engenheiro("Joao Snow",35,3);
  std::cout << eng1;
  
  Engenheiro *eng2 = new Engenheiro("Daniela Targaryen",30,1);
  std::cout << eng2;
  
  Engenheiro *eng3 = new Engenheiro("Bruno Stark",30,2);
  std::cout << eng3;
  
  
  Vendedor *vend1 = new Vendedor("Tonho Lannister",20,5000);
  std::cout << vend1;

  Vendedor *vend2 = new Vendedor("Jose Mormont",25,3000);
  std::cout << vend2;
	
  Vendedor *vend3 = new Vendedor("Sonia Stark",30,4000);
  std::cout << vend3;
  
  return 0;	
}