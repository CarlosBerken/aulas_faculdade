/*Construa um algoritmo que entre com 10 valores inteiros em
um vetor e na sequкncia coloque estes 10 valores em 
ordem crescente.

Varбveis

VetorInt[10] inteiro;
caracter op;
Aux inteira;

Inнcio

faзa
   limpa tela
   //laзo de repetiзгo para preencher o vetor
   Para(indice=0,indice < 10,indice=indice+1)
     escreva("\n Digite o valor inteiro para o VetorInt[",indice,"]:");
     leia(VetorInt[indice]);
   fimopara
   
    //laзo de repetiзгo para mostrar o vetor original
    
   Para(indice=0,indice < 10,indice=indice+1)
     escreva("\n VetorInt[",indice,"]:",VetorInt[indice]);
   fimopara
   
//laзo de repetiзгo para colocar o vetor original em ordem crescente  
   
   Para(indice=0,indice < 10,indice=indice+1)
     Para(indiceExtra=0,indiceExtra < 10, indiceExtra=indiceExtra+1)
           se(VetorInt[indice] > VetorInt[indiceExtra]) entгo
                   Aux = VetorInt[indice];
                   VetorInt[indice] = VetorInt[indiceExtra];
                   VetorInt[indiceExtra] = Aux;
           fimse
	fimpara
  fimpara		           
   
   //laзo de repetiзгo para mostrar o vetor original ordenado crescentemente
    
   Para(indice=0,indice < 10,indice=indice+1)
     escreva("\n VetorInt[",indice,"]:",VetorInt[indice]);
   fimopara
   
escreva("\n\n"); 

escreva("Deseja novos valores para o Vetor <S> ou <N>");
leia(op);
op=maнsculo(op);
Enquanto(op != 'N');//geral - deseja continuar ou nгo
//while()
fim algoritmo;*/   

#include<conio.h>
#include<stdio.h>
#include<iostream>

int VetorInt[10];// inteiro;
char op;
int Aux;// inteira;

//Inнcio
main(){

do{//faзa
   system("cls");//limpa tela
   //laзo de repetiзгo para preencher o vetor
   printf("\n Entrada de Valores no Vetor");
   for(int indice=0;indice < 10;indice=indice+1){
     printf("\n Digite o valor inteiro para o VetorInt[%i]:",indice);
     scanf("%i",&VetorInt[indice]);
}

  //laзo de repetiзгo para mostrar o vetor original
    printf("\n Valores Inteiros do Vetor Original");
   for(int indice=0;indice < 10;indice=indice+1){
     printf("\n VetorInt[%i] : %i",indice,VetorInt[indice]);
}

 printf("\n Organizando o Vetor em Ordem Crescente.......");

//laзo de repetiзгo para colocar o vetor original em ordem crescente  
   
   for(int indice=0;indice < 10;indice=indice+1){
      for(int indiceExtra=0;indiceExtra < 10;indiceExtra++){
        if(VetorInt[indice] < VetorInt[indiceExtra]){
                   Aux = VetorInt[indice];
                   VetorInt[indice] = VetorInt[indiceExtra];
                   VetorInt[indiceExtra] = Aux;
           }//fimse
	 }//fimpara
  }//fimpara

//laзo de repetiзгo para mostrar o vetor original ordenado crescentemente
  printf("\n Vetor em Ordem Crescente");  
  for(int indice=0;indice < 10;indice++){
     printf("\n VetorInt[%i]: %i",indice,VetorInt[indice]);
  }//fimpara
   
printf("\n\n"); 

printf("\n Deseja novos valores para o Vetor <S> ou <N>");
op=getche();//get porta de entra che ch-caracater e - co
op=toupper(op);
}while(op != 'N');//geral - deseja continuar ou nгo
//fim algoritmo;*/
}     
