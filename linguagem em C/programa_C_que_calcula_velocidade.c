#include <stdio.h>
int main()
{
    //Declaração de variáveis
    float distancia, tempo, velocidade, ms;
    //Entrada de dados distância e velocidade
    printf("Digite a distância percorrida: ");
    scanf("%f", &distancia);
    printf("Digite o tempo gasto: ");
    scanf("%f", &tempo);
    //Cálculo da velocidade média
    velocidade = distancia / tempo;
    //Cálculo da velocidade em metros por segundo
    ms=velocidade/3.6;
    //Exibe o resultado da velocidade em Km/h e m/s
   printf("A velocidade média é de %.2f Km/h \n", velocidade);
   printf("A velocidade média é de %.2f m/s", ms);
   
    return 0;
    
}