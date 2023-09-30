#include <iostream>
#include <iomanip>

#include "Calculadora.h"

int main(){

  Calculadora calculadora;

  double a, b; 
  std::cout << "Ingrese el primer numero: ";
  std::cin >> a;
  std::cout << "Ingrese el segundo numero: ";
  std::cin >> b;

// configurar la salida de los numeros
  std::cout << std::fixed << std::setprecision(2);

  std::cout << "Suma: " << calculadora.sumar(a, b) << std::endl;
  std::cout << "Resta: " << calculadora.restar(a, b) << std::endl;
  std::cout << "Multiplicacion: " << calculadora.multiplicar(a, b) << std::endl;
  


  if (b != 0) {
    
  std::cout << "Division: " << calculadora.dividir(a, b) << std::endl;
  
  } else {
    std::cout << "No se puede dividir por cero." << std::endl;
  }
  return 0;


}
