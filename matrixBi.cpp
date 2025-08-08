#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j;
    float nota[2][3], m=0;
    for (i=0;i<2;i++) {
        for ( j=0;j<3;j++) {
            printf("\n Digite a nota %d da disciplina %d ", j+1, i+1 );
            scanf("%f",&nota[i][ j]);
            m = m + nota[i][ j];
        }
        printf("\n A media da disciplina %d e' %.2f \n", i+1, m/3 );
        m = 0; //depois de imprimir o valor em tela zera a variável para o cálculo da média da próxima disciplina
    }
    system("pause");
    return 0;
}