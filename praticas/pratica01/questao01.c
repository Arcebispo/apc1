/*
calcule a media final a partir da formula (0,4 x A1) + (0.6 x A2).Considere A1 e A2 numeros reais de 0 a 10
*/

#include <stdio.h>
int main()
{
float nota01 = 5.5f;
float nota02 = 6.0f;

float media = 0.4 * nota01 + 0.6 * nota02;
printf("A média é %f\n",media);

return 0;
}