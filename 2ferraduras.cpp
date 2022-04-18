/*2. Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os
cavalos comprados para um haras.
*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

float cavalos;
int ferraduras;

main () {

printf (" \n Quantidades de Cavalos");
scanf ("%f",&cavalos);

printf (" \n Quantidade de Ferraduras");

ferraduras = cavalos * 4;

printf("A Quantidade de Ferraduras; %i", ferraduras);

printf("\n \n");

system("pause");


}