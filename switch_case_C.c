#include <stdio.h>
#include <conio.h>

int main()
{
    int valor;//Declaração de variáveis
    
    printf("Digite um valor entre 1 e 7: ");//Exibe mensagem na tela
    scanf("%d", &valor);//Armazena o valor na variável
    
    switch(valor)//Inicio da comparação
    {
        //Condições de comparação
        case 1: 
        printf("Domingo");
        break;
        
        case 2:
        printf("Segunda-feira da tristeza");
        break;
        
        case 3:
        printf("Terça-Feira");
        break;
        
        case 4:
        printf("Quarta ta quase lá");
        break;
        
        case 5:
        printf("Quinta cheirinho de sexta");
        break;
        
        case 6:
        printf("Sextou");
        break;
        
        case 7:
        printf("Sabadão brabo");
        break;
    }
 
 
    return 0;
}//fim do algoritmo