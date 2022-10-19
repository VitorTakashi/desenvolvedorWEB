#include <stdio.h>//biblioteca 

int main()
{
    
    float nota;//Declaração de variáveis
    printf("Digite a nota do aluno: ");//Exibe mensagem na tela
    scanf("%f", &nota);//salva o número digitado na variável
    
    if(nota>=6 && nota<=10){//compara se o aluno foi aprovado
        printf("Aluno Aprovado!");
    }
    else if(nota>=0 && nota<6){//compara se o aluno foi reprovado
        printf("Aluno reprovado!");
    }
    else{//Verifica se a nota digitada está errada
        printf("A nota digitada está errada!");
    }

    return 0;
}//fim do algoritmo
