/* Três amigos, Carlos, André e Felipe, decidiram rachar igualmente a conta de um bar. Faça
um algoritmo para ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça
com que Carlos e André não paguem centavos. Ex: uma conta de R$101,53 resulta em R$33,00
para Carlos, R$33,00 para André e R$35,53 para Felipe. */

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

float ValorComCentavos, ValorTotal;
int ValorSemCentavos;

int main(void){ 

        printf("\n==============================================================");
        printf("\nDigite o valor da conta do bar: \n");
        scanf("%f", &ValorTotal);
        printf("==============================================================");


        ValorSemCentavos = ValorTotal/3;
        ValorComCentavos = ValorTotal - (ValorSemCentavos * 2);



        printf("\nOs dois primeiros clientes pagaram o valor de R$%.2i e o ultimo cliente pagou R$%.2f.", ValorSemCentavos, ValorComCentavos);

}