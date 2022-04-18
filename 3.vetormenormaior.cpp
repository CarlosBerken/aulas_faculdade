/*Construa um vetor de 5 posições com valores inteiros e na 
sequência localize o maior velor e seu índice e o menor valor e
seu índice. 
Primeiramente entre com os valores, mostre o vetor original e 
na sequência localize o maior e o menor mostrando eles na tela com 
seu respctivo índice. */

#include <conio.h>
#include <stdio.h>
#include <iostream>

int Vetor[5];
int Maior;
int Menor;
char op;

int main(void)
{
    do
    {
        system("cls");
        // Seta valores no vetor
        for (int i = 0; i < 5; i++)
        {
            printf("Digite o valor do Vetor[%i]: ", i);
            scanf("%i", &Vetor[i]);
        }

        // Ver numero Menor
        Menor = Vetor[0];
        for (int i = 0; i < 5; i++)
        {
            if (Vetor[i] < Menor)
            {
                Menor = Vetor[i];
            }
        }

        // Ver numero Maior
        Maior = Vetor[0];
        for (int i = 0; i < 5; i++)
        {
            if (Vetor[i] > Maior)
            {
                Maior = Vetor[i];
            }
        }
        system("cls");
        printf("==============================================================");
        printf("\nPosicoes iniciais do Vetor:");
        printf("\n==============================================================");
        // Escreve vetores originais
        for (int i = 0; i < 5; i++)
        {
            printf("\nVetor[%i]: %i", i, Vetor[i]);
        }
        printf("\n==============================================================");
        printf("\nMenor Vetor: %i", Menor);
        printf("\nMaior Vetor: %i", Maior);
        printf("\n==============================================================");
        printf("\nDeseja fazer outro calculo? Digite <S> ou <N>.");
        printf("\n==============================================================\n");
        scanf("%s", &op);
        op = toupper(op);
    } while (op != 'N');
}