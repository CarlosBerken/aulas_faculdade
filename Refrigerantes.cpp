/*A fábrica de refrigerantes Meia-Cola vende seu produto 
em três formatos: lata de 350 ml, garrafa de 600 ml e 
garrafa de 2 litros. Se um comerciante compra uma 
determinada quantidade de cada formato, faça um algoritmo 
para calcular quantos litros de refrigerante ele comprou.

//Variáveis

L350ML,G600ML,G2litros tipo inteiro
QtidadeLitrosL350ML,QtidadeLitrosG600Ml tipo fraciona´rio
QtidadeTotalLitros,QtidadeLitrosG2litros tipo fracionário

//inicio

escreva("Digite a quantidade de latas de 350ml compradas:");
leia(L350ML); // 5 latas
escreva("Digite a quantidade de Garrafas de 600ml compradas:");
leia(G600ML); //3 garrafas
escreva("Digite a quantidade de Garrafas de 2 litros compradas:");
leia(G2litros);

QtidadeLitrosL350ML = (350 * L350ML)/1000; // 350*5=1750/1000=1,75 LITROS
QtidadeLitrosG600Ml = (600 * G600ML)/1000;
QtidadeLitrosG2litros = G2litros * 2;

QtidadeTotalLitros = QtidadeLitrosL350ML + QtidadeLitrosG600Ml + QtidadeLitrosG2litros;

escreva ("Quantidade de latas de 350ml:",L350ML, "que equivale a:", QtidadeLitros, "litros"); 
escreva ("Quantidade de garrafas de 600ml:",G600ML, "que equivale a:", QtidadeLitrosG600Ml, "litros"); 
escreva ("Quantidade de garrafas de 2 litros:",G2litros, "que equivale a:", QtidadeLitrosG2litros, "litros");
escreva("Foi comprado no total de : ",QtidadeTotalLitros,"litros");

fim algoritmo */

#include <conio.h>
#include <stdio.h>
#include <iostream>

int L350ML, G600ML, G2litros;
float QtidadeLitrosL350ML, QtidadeLitrosG600Ml;
float QtidadeTotalLitros, QtidadeLitrosG2litros;

main()
{

    printf(" \n Digite a quantidade de latas de 350ml compradas:");
    scanf("%i", &L350ML); // 5 latas
    printf(" \n Digite a quantidade de Garrafas de 600ml compradas:");
    scanf("%i", &G600ML); //3 garrafas
    printf(" \n Digite a quantidade de Garrafas de 2 litros compradas:");
    scanf("%i", &G2litros);

    QtidadeLitrosL350ML = (350.00 * L350ML) / 1000.00;
    QtidadeLitrosG600Ml = (600.00 * G600ML) / 1000.00;
    QtidadeLitrosG2litros = G2litros * 2;

    QtidadeTotalLitros = QtidadeLitrosL350ML + QtidadeLitrosG600Ml + QtidadeLitrosG2litros;

    printf(" \n Quantidade de latas de 350ml: %i que equivale a : %.2f ", L350ML);
    printf(" \n Quantidade de garrafas de 600ml: %i que equivale a : %.2f ", G600ML, QtidadeLitrosG600Ml);
    printf(" \n Quantidade de garrafas de 2 litros: %i que equivale a : %.2f ", G2litros, QtidadeLitrosG2litros);

    printf(" \n Foi comprado no total de : %.2f litros ", QtidadeTotalLitros);

    printf(" \n\n ");

    system("pause");
}