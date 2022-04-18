/* Leia um vetor de 13 posições com valores inteiros e em seguida leia
também dois valores X e Y quaisquer correspondentes a duas posições no vetor.
Ao final seu programa deverá escrever as posições, os valores contidos nestas
posições e a soma dos valores encontrados nas respectivas posições X e Y.
Importante observar que o vetor tem somente 13 posições, então os
valores de X e Y não podem ser maiores que o maior índice do vetor. Desta
forma realizar o controle para que caso os usuários digitem um valor para
X e Y fora destes índices, que seja pedido novamente. (4,0)

*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>

int Vetor[13];
int ValorX, ValorY;
int Soma;
char op;

int main(void) {
do
{
    setlocale(LC_ALL,"portuguese");
    srand(time(0));

    system("cls");
    for(int i=0; i<13; i ++){
        Vetor[i] = rand() % 100;
         printf("\n Vetor[%i]= %i",i, Vetor[i]);
    }

do {
    printf("\n Digite a posicao X \n");
    scanf("%i",&ValorX);
    if ((ValorX < 0) || (ValorX > 12)) {
        system("cls");
        printf("\n Valor nao corresponde ao Vetor, Digite um novo numero de 0 a 12");
    }
}while ((ValorX < 0) || (ValorX > 12));

do{
    printf("\n Digite a posicao Y \n");
    scanf("%i",&ValorY);
    if ((ValorY < 0) || (ValorY >12)) {
        system("cls");
        printf("\n Valor nao corresponde ao Vetor, Digite um novo numero de 0 a 12");
    }
}while ((ValorY < 0) || (ValorY > 12));

Soma = Vetor[ValorX] + Vetor[ValorY];

printf("\n Os valores encontrados foram %i e %i:\n ", ValorX, ValorY);
printf("\n VetorX[%i] = %i\n", ValorX, Vetor[ValorX]);
printf("\n VetorY[%i] = %i\n", ValorY, Vetor[ValorY]);
printf("\n Vetor[%i] + Vetor[%i] = %i", ValorX, ValorY, Soma);
printf("\n\n");
printf("\n Deseja gerar novos caracteres <S> ou <N>");
scanf("%s", &op);
op = toupper(op);
system("pause");
}while(op != 'N');
}

