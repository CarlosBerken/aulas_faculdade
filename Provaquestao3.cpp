/* 03 O cardápio de uma lancheria é o seguinte:
Especificação Código Preço
Cachorro quente 100 1,20
Bauru simples 101 1,30
Bauru com ovo 102 1,50
Hambúrguer 103 1,20
Cheeseburguer 104 1,30
Refrigerante 105 1,00
Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule
o valor a ser pago por aquele lanche. Considere que a cada execução somente
será calculado um item.
*/

#include <conio.h>
#include <stdio.h>
#include <iostream> 
#include <stdlib.h>

char Lanche[30];
int Codigo;
float PrecoTotal;
int QtidLanche;
char op;

main()
{

    do
    {
        system("cls");
        printf("\n             Cardapio            \n  ");
        printf("\n Lanche            Codigo     Preco Unitario");
        printf("\n 100 - Cachorro quente R$1,20");
        printf("\n 101 - Bauru simples   R$1,30");
        printf("\n 102 - Bauru com ovo  R$1,50");
        printf("\n 103 - Hamburger      R$1,20");
        printf("\n 104 - Cheeseburguer  R$ 1,30");
        printf("\n 105 - Refrigerante   R$1,00");
        printf("\n");
        printf("\n Digite o codigo do Lanche desejado: ");
        scanf("%d", &Codigo);
        printf("\n");
        printf("\n Quantos lanches deseja deste escolhido? ");
        scanf("%d", &QtidLanche);

        if (Codigo == 100)
        { 
            printf("\n Voce escolheu o Cachorro quente ");
            PrecoTotal = QtidLanche * 1.20; //= atribuição
        }

        if (Codigo == 101)
        {
            printf("\n Voce escolheu o Bauru simples ");
            PrecoTotal = QtidLanche * 1.30;
        }

        if (Codigo == 102)
        {
            printf("\n Voce escolheu o Bauru com ovo ");
            PrecoTotal = QtidLanche * 1.50;
        }

        if (Codigo == 103)
        {
            printf("\n Voce escolheu o Hamburger");
            PrecoTotal = QtidLanche * 1.20;
        }

        if (Codigo== 104)
        {
            printf("\n Voce escolheu o Cheeifburguer ");
            PrecoTotal = QtidLanche * 1.30;
        }

        if (Codigo == 105)
        {
            printf("\n Voce escolheu o Refrigerante ");
            PrecoTotal = QtidLanche * 1.00;
        }

        printf("\n \n");
        printf("\n Preco total da compra foi de: R$ %2.2f", PrecoTotal);
        printf("\n \n");
        fflush(stdin);
        printf(" \n Deseja pedir novos lanches <S> ou <N> ");
        scanf("%c", &op); 
        op = toupper(op);
    } while (op != 'N');
} 
