//
// Created by caio on 22/08/2025.
//

#include "exe14.h"
#include <cstdio>
int main() {
    float MediaAprovacao, Nota1, Nota2, Nota3;
    bool Resultado;
    char Sexo, Nome[12];
    printf("Informe a media de aprovacao: ");
    scanf("%f", &MediaAprovacao);
    printf("Nome do aluno: ");
    scanf("%s", Nome);
    printf("Sexo F/M: ");
    scanf(" %c", &Sexo);
    printf("Nota 01: ");
    scanf("%f", &Nota1);
    printf("Nota 02: ");
    scanf("%f", &Nota2);
    printf("Nota 03: ");
    scanf("%f", &Nota3);
    Resultado = (Nota1 + Nota2 + Nota3) >= MediaAprovacao;
    if (Resultado && Sexo == 'm') {
            printf("M APROVADO %.2f", Nota1 + Nota2 + Nota3);
    } else if (Resultado && Sexo == 'f') {
        printf("F APROVADO %.2f", Nota1 + Nota2 + Nota3);
    } else if (!Resultado && Sexo == 'm') {
        printf("M REPROVADO %.2f", Nota1 + Nota2 + Nota3);
    }else {
        printf("F REPROVADO %.2f", Nota1 + Nota2 + Nota3);
    }
}