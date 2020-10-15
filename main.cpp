#include "Engenheiro.cpp"
#include "Vendedor.cpp"
#include "Empregado.cpp"

int main() {

  Engenheiro *eng1 = new Engenheiro("Joao Snow",35,3,9.5);
  std::cout << eng1 << std::endl;
  
  Engenheiro *eng2 = new Engenheiro("Daniela Targaryen",30,1,8);
  std::cout << eng2 << std::endl;
  
  Engenheiro *eng3 = new Engenheiro("Bruno Stark",30,2,8);
  std::cout << eng3 << std::endl;
  
  
  Vendedor *vend1 = new Vendedor("Tonho Lannister",20,5000,6);
  std::cout << vend1 << std::endl;

  Vendedor *vend2 = new Vendedor("Jose Mormont",25,3000,8);
  std::cout << vend2 << std::endl;
	
  Vendedor *vend3 = new Vendedor("Sonia Stark",30,4000,8);
  std::cout << vend3;
  
  return 0;	
}