/*02 - Leia um vetor de 16 posições com caracteres diferentes e crie um novo
com a troca dos 8 primeiros caracteres pelos 8 últimos e vice-e-versa. Mostre o
vetor inicial e o final.
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char Vetor[16];
char VetorInverso[16];
int VetorFinal;
int op;

int main(void){

do
{
    system("cls");

    printf("\nValores Inicias\n");  // Primeiros Valores Normais
    for (int i = 0; i < 16; i++)
    {
        Vetor[i] = rand() % 25 + 65;
        printf("Vetor[%i]= %c\n", i, Vetor[i]);
    }

    VetorFinal = 15;
    for (int i = 0; i < 16; i++)
    {
        VetorInverso[i] = Vetor[VetorFinal - i];
    }

    printf("\n Valores ao Contrario\n"); // Valores que aparecem ao contrario
    for (int i = 0; i < 16; i++)
    {
        printf("Vetor[%i] = %c\n", i, VetorInverso[i]);
    }
    printf("\n Deseja gerar novos Caracteres inversos ? <S> ou <N>");
    op=getche();
    op = toupper(op);
 } while(op != 'N');
}
