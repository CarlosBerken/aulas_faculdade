#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>

int atividade;

// Variaveis atividade 1
int VetorAtividade1[13], ValorX, ValorY;
int Soma;

// Variaveis atividade 2
char VetorAtividade2[16], VetorInv[16];
int UltimoVetor;

// Variaveis atividade 3
int Opcao, Quantidade;
float Valor, ValorFinal;
char Produto[30];

int main(void)
{
    srand(time(0));

    system("cls");

    // Gera os vetores
    for (int i = 0; i < 13; i++)
    {
        VetorAtividade1[i] = rand() % 100;
        printf("\nVetor[%i] = %i", i, VetorAtividade1[i]);
    }

    // Escolher valor X
    do
    {
        printf("\nDigite uma posicao X para selecionar nos vetores gerados:\n");
        scanf("%i", &ValorX);
        if ((ValorX < 0) || (ValorX > 12))
        {
            system("cls");
            printf("Valor digitado fora das margems do vetor. Digite um numero entre 0 e 12!\n");
        }
    } while ((ValorX < 0) || (ValorX > 12));

    // Escolher valor Y
    do
    {
        printf("\nDigite uma posicao Y para selecionar nos vetores gerados:\n");
        scanf("%i", &ValorY);
        if ((ValorY < 0) || (ValorY > 12))
        {
            system("cls");
            printf("Valor digitado fora das margems do vetor. Digite um numero entre 0 e 12!\n");
        }
    } while ((ValorY < 0) || (ValorY > 12));

    Soma = VetorAtividade1[ValorX] + VetorAtividade1[ValorY];

    system("cls");
    printf("\n==============================================================");
    printf("\nOs vetores encontrados nas posicoes %i e %i foram:\n", ValorX, ValorY);
    printf("Vetor[%i] = %i\n", ValorX, VetorAtividade1[ValorX]);
    printf("Vetor[%i] = %i\n", ValorY, VetorAtividade1[ValorY]);
    printf("Vetor[%i] + Vetor[%i] = %i", ValorX, ValorY, Soma);
    printf("\n==============================================================");
    printf("\nTecle entre para voltar ao Menu Principal:\n");
    getch();
    scanf("%c", &op);
    op = toupper(op);
}
while (op != 'N')
    ;
}
