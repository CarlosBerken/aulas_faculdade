/* Construir um algortimo que leia o valor de compra de um cliente e calcule a %
de desconto conforme :
-Valor até R$ 100,00 - 10% desconto
-Valor até R$ 101,00 até R$ 150,00 - 15% desconto
-Valor até R$ 151,00 até R$ 200,00 - 20% desconto
-Valor até R$ 201,00 até R$ 300,00 - 30% desconto
-Valor até R$ 301,00 até R$ 400,00 - 40% desconto
-Valor até R$ 401,00 até qualquer outro valor - 50% desconto
Apresente o nome do cliente, CPF, fone, e o valor da compra, o % de desconto 
e valor total pago.

1 - Levantamento dos Requisitos - Variáveis de entrada, processamento e saída 

Variáveis
caracter Nome_Cliente; //variável de entrada
caracter CPF;//variável de entrada
Inteiro Fone;//variável de entrada
fracionário Valor_Compra;//variável de entrada
fracionário Perc_Desconto;//variável de processamento e saída
fracionário Valor_Total_Pago;//variável de processamento e saída

escreva ("Digite Nome_Cliente do Cliente :");
leia("Nome_Cliente");

escreva ("Digite o CPF do Cliente :");
leia("CPF")

escreva ("Digite o Fone do Cliente:");
leia("Fone");

escreva ("Digite o da Valor_Compra do Cliente : ");
leia("Valor_Compra");

Se (Valor_Compra <= 100,00 ) então
    Perc_Desconto = Valor_Compra * 0,1  //10% desconto
    Valor_Total_Pago = Valor_Compra - Perc_Desconto;
Fim se

Se(Valor_Compra =101,00 e <= 150,00 ) então
    Perc_Desconto = Valor_Compra * 0,15  //15% desconto
    Valor_Total_Pago = Valor_Compra - Perc_Desconto;
Fim se

Se(Valor_Compra =151,00 e <= 200,00) então
    Perc_Desconto = Valor_Compra * 0,20  //20% desconto
    Valor_Total_Pago = Valor_Compra - Perc_Desconto;
Fim se

Se(Valor_Compra = 201,00 e <= 300,00) então
    Perc_Desconto = Valor_Compra * 0,30  //30% desconto
    Valor_Total_Pago = Valor_Compra - Perc_Desconto;
Fim se

Se(Valor_Compra = 301,00 e <= 400,00)
    Perc_Desconto = Valor_Compra * 0,40  //40% desconto
    Valor_Total_Pago = Valor_Compra - Perc_Desconto;
Fim se

Se(Valor_Compra =401,00) então
    Perc_Desconto = Valor_Compra * 0,50  //50% desconto
    Valor_Total_Pago = Valor_Compra - Perc_Desconto;
Fim se

Saída de dados:

escreva("Nome do Cliente:",Nome_Cliente );
escreva("CPF do Cliente:", CPF);
escreva("Fone do Cliente:", Fone);
escreva("Valor de Compra do Cliente:", Valor_Compra);
escreva("Percentual de desconto do Cliente:", Perc_Desconto);
escreva("Valor total pago pelo Cliente", Valor_Total_Pago);

Fim algortimo

Codificar o algoritmo - converter para a linguagem C/C++ 
*/

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

char Nome_Cliente[30];
char CPF[15];
int Fone;
int Percentual;
float Valor_Compra;
float Perc_Desconto;
float Valor_Total_Pago;

main()
{

    printf(" \n Digite Nome_Cliente do Cliente :");
    scanf("%s", &Nome_Cliente);
fflush(stdin);
    printf(" \n Digite o CPF do Cliente :");
    scanf("%s", &CPF);

    printf(" \n Digite o Fone do Cliente:");
    scanf("%i", &Fone);

    printf(" \n Digite o da Valor_Compra do Cliente : ");
    scanf("%f", &Valor_Compra);

    if (Valor_Compra <= 100.00)
    {
        Perc_Desconto = Valor_Compra * 0.10; //10% desconto
        Valor_Total_Pago = Valor_Compra - Perc_Desconto;
        Percentual = 10;
    }

    if (Valor_Compra > 100.00 && Valor_Compra <= 150.00)
    {
        Perc_Desconto = Valor_Compra * 0.15; //15% desconto
        Valor_Total_Pago = Valor_Compra - Perc_Desconto;
        Percentual = 15;
    }

    if (Valor_Compra > 150.00 && Valor_Compra <= 200.00)
    {
        Perc_Desconto = Valor_Compra * 0.20; //20% desconto
        Valor_Total_Pago = Valor_Compra - Perc_Desconto;
        Percentual = 20;
    }
    if (Valor_Compra > 200.00 && Valor_Compra <= 300.00)
    {
        Perc_Desconto = Valor_Compra * 0.30; //30% desconto
        Valor_Total_Pago = Valor_Compra - Perc_Desconto;
        Percentual = 30;
    }

    if (Valor_Compra > 300.00 && Valor_Compra <= 400.00)
    {
        Perc_Desconto = Valor_Compra * 0.40; //40% desconto
        Valor_Total_Pago = Valor_Compra - Perc_Desconto;
        Percentual = 40;
    }

    if (Valor_Compra > 400.00)
    {
        Perc_Desconto = Valor_Compra * 0.50; //50% descontoS
        Valor_Total_Pago = Valor_Compra - Perc_Desconto;
        Percentual = 50;
    }

    printf("\n Nome do Cliente: %s", Nome_Cliente);
    printf("\n CPF do Cliente: %s", CPF);
    printf("\n Fone do Cliente: %i", Fone);
    printf("\n Valor de Compra do Cliente: %.2f", Valor_Compra);
    printf("\n Percentual de desconto do Cliente: %i %c = %.2f ", Percentual, 37, Perc_Desconto);
    printf("\n Valor total pago pelo Cliente: %.2f", Valor_Total_Pago);
    printf("\n \n");

    system("pause");
}

//fim algoritmo
