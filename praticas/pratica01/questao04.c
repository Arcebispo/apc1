#include <stdio.h>

  #define ICMS 0.17f
  #define COFINS 0.076f
  #define PIS_PASEP 0.0165f
int main (){

  float preco = 50;
  float valor_icms = ICMS*preco;
  float valor_cofins = COFINS*preco;
  float valor_pispasep = PIS_PASEP*preco;

  float precofinal = (1+ICMS+COFINS+PIS_PASEP)*preco;


  printf("O ICMS a ser pago é %.2f\n",valor_icms);
  printf("O COFINS a ser pago é %.2f\n",valor_cofins);
  printf("O PIS_PASEP a ser pago é %.2f\n",valor_pispasep);
  printf("O IMPOSTO TOTAL a ser pago é %.2f\n", precofinal);

  return 0;
}