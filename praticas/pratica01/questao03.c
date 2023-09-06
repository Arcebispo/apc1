#include <stdio.h>

int main (){

  int p = 2;
  const float pi = 3.1416f;
  int raio = 20;

  float perimetro = p*pi*raio;

  printf("O perímetro da PIZZA é %f\n", perimetro);

  return 0;
}