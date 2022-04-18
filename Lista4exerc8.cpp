/*Lista4 - 8. Leia um vetor de 40 posiþ§es.
Contar e escrever os valores e quantos 
valores sÒo pares e o mesmo Ýmpares.

//Varißveis

Vetor[40] tipo inteiro;
QtidadePar, QtidadeImpar tipo inteiro;
op tipo caracter;

InÝcio
Faþa
limpa tela;
QtidadePar = 0;
QtidadeImpar = 0;
escreva("Gerar os 40 n·meros inteiros");
para(int i=0;i<40;i++)
   Vetor[i] = randomizar 0-100;
   escreva("Vetor[",i,"]: ",Vetor[i]);   
fimpara

escreva("Selecionando os N·meros Pares");
para(int i=0;i<40;i++)
   se(Vetor[i] / 2 - resto = 0)
    escreva("Vetor[",i,"]: ",Vetor[i],"Ú Par");   
    QtidadePar++;
    fimse
fimpara
escreva("Qtidade N·meros Pares: ",QtidadePar);

escreva("Selecionando os N·meros Impares");
para(int i=0;i<40;i++)
   se(Vetor[i] / 2 - resto<>0)
    escreva("Vetor[",i,"]: ",Vetor[i],"Ú Impar");   
    QtidadeImpares++;
    fimse
fimpara
escreva("Qtidade N·meros Impares: ",QtidadeImpares);

escreva("Digite a opþÒo <S> ou <N> para novos valores?");
leia(op);
op= maÝsculo(op);
Enquanto (op <> 'N');

fim algoritmo*/

//conveter para linguagem C

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
//varißveis
int Vetor[40];// tipo inteiro;
int QtidadePar, QtidadeImpar;// tipo inteiro;
char op;// tipo caracter;

//InÝcio
main(){
setlocale(LC_ALL,"Portuguese");
//Faþa
do{
//limpa tela;
system("cls");
QtidadePar = 0;
QtidadeImpar = 0;
printf("\n Gerar os 40 n·meros inteiros\n");
for(int i=0;i<40;i++){
   Vetor[i] = rand() % 100;
   printf("\n Vetor[%i]: %i ",i,Vetor[i]);   
}
printf("\n \n");

printf("\n Selecionando os N·meros Pares \n");
for(int i=0;i<40;i++){
   if(Vetor[i] % 2 == 0){
     printf("\n Vetor[%i]: %i Ú Par",i,Vetor[i]);   
     QtidadePar++;}//QtidadePar=QtidadePar+1;
}
printf("\n \n");
printf("\n Qtidade N·meros Pares: %i ",QtidadePar);
printf("\n \n");
printf("\n Selecionando os N·meros Impares \n");
for(int i=0;i<40;i++){
   if(Vetor[i] % 2 != 0){
    printf("\n Vetor[%i]: %i Ú Impar",i,Vetor[i]);   
    QtidadeImpar++;//QtidadeImpar=QtidadeImpar+1;
    }
}
printf("\n \n");
printf("\n Qtidade N·meros Impares: %i",QtidadeImpar);
printf("\n \n");
printf("\n \n");
printf("\n Digite a opþÒo <S> ou <N> para novos valores?");
op=getche();
op = toupper(op);}while(op != 'N');
//Enquanto (op <> 'N');
}
//fim algoritmo*/
