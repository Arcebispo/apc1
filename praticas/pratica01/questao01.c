/*
calcule a media final a partir da formula (0,4 x A1) + (0.6 x A2).Considere A1 e A2 numeros reais de 0 a 10
*/

#include <stdio.h>
int main()
{
//float nota01 = 5.5f;
//float nota02 = 6.0f;
float nota01;
float nota02;

printf("Media temque ser superior a 5\n");  
printf("Informe a primeira nota:");
scanf("%f",&nota01);
printf("Informe a segunda nota:");
scanf("%f",&nota02);
float media = 0.4 * nota01 + 0.6 * nota02;
printf("A média é %f\n",media);
if (media > 5)
{
printf("APROVAÇÃO ACIMA DA MÉDIA");
}
else if(media == 5)
{
printf("APROVAÇÃO NA MÉDIA");
} 
else
{
printf("REPROVAÇÃO abaixo DA MÉDIA");       
}
return 0;
}