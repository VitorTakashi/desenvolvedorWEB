#include <stdio.h>

int main()
{
    float nota;
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    
    if(nota>=6 && nota<=10){
        printf("Aluno Aprovado!");
    }
    else if(nota>=0 && nota<6){
        printf("Aluno reprovado!");
    }
    else{
        printf("A nota digitada está errada!");
    }

    return 0;
}
