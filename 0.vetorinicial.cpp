/*Construa um algoritmo que leia um Vetor de 10 posiþ§es com
valores inteiros.

Varißvel
Vetor[10] do tipo inteiro;
op tipo caracter

Inicio

faþa 
limpa tela

escreva("Entrada de dados do Vetor[10]");
para(ind=0;ind<10;ind=ind+1){
    escreva("Digite o valor inteiro Vetor[",ind",]:");
    leia(Vetor[ind]);}
    

escreva("saida de dados do Vetor[10]");
para(ind=0;ind<10;ind=ind+1){
    escreva("Vetor[",ind",]:",Vetor[ind]);
}
 
escreva("Digite a opþÒo <S> ou <N> para novos valores?");
leia(op);
op= maÝsculo(op);
Enquanto (op <> 'N');

fim algoritmo*/

//conveter para linguagem C

#include<conio.h>
#include<stdio.h>
#include<iostream>

//varißveis

int Vetor[10];// do tipo inteiro;
char op;// tipo caracter

//Inicio
main(){
//faþa 
do{

//limpa tela
system("cls"); //cl clear s screen 

printf("\n Entrada de dados do Vetor[10]");
for(int ind=0;ind<10;ind=ind+1){//laþo de repetiþÒo
    printf("\n Digite o valor inteiro Vetor[%d]:",ind);
    scanf("%d",&Vetor[ind]);}
    

printf("\n saida de dados do Vetor[10]");
for(int ind=0;ind<10;ind=ind+1){
    printf("\n Vetor[%d]: %d",ind,Vetor[ind]);
}
printf("\n\n");
printf("\n laþo de repetiþÒo com uso do do{   }while()");
int i=0;
do{
     printf("\n Vetor[%d]: %d",i,Vetor[i]);
     i++;
}while(i<10);



fflush(stdin);//limpa buffer teclado
printf("\n Digite a opþÒo <S> ou <N> para novos valores?");
scanf("%c",&op);
op = toupper(op);}while(op != 'N');
//Enquanto (op <> 'N');
}
//fim algoritmo*/
 
    


