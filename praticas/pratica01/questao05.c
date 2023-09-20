#include <stdio.h>
#include <math.h>

int main (){

  const float giga = 1024;
  const float quantidade = 5;
  
  float total_bite = quantidade*giga;

  printf("--------Quantidade de bites é %f--------\n\n", total_bite);

  double valorEMgiga = 10;
  double valorEMbytes = valorEMgiga * pow(1024,3);
  
  printf("--------Valor em giga %f em bytes é --------%f\n\n", valorEMgiga , valorEMbytes);
  
  return 0;
}