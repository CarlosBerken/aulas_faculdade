/*Construa um programa em C/C++ que tenha as seguintes opções de Menu:
1 - Leia um vetor de 10 posições com valores aleatórios 0-100 e na 
sequência selecione aleatoriamente três posições/índices deste vetor
e apresente os seus valores e a multiplicação destes.
2 - Leia dois vetores de 5 posições com valores inteiros cada e 
gere um terceiro com o resutados da soma dos valores sendo a lógica:
soma o 1ª elemento do 1º vetor com o 5º elemento do 2º vetor, 
2ª elemento do 1º vetor com o 4º elemento do 2º vetor,e assim
sucessivamente.
3 - Construa um vetor de 13 posições com valores caracteres aleatórios e
na sequência pedir para o usuário digitar um caracter e localizar onde 
este esta no vetor e quantas vezes aparece.

algoritmo MenuVetores

Variáveis
//opção 1
inteiro VetorAle[10];
inteiro Ind1,Ind2,Ind3;
inteiro MultValindices;

//opção 2
inteiro Vetor1[5],Vetor2[5],Vetor3[5];
inteira contador;

//opção 3
caracteres VetorChar[13];
caracter Caracter;
inteira QtidadeVezes;


caracter op;
Inicio
limpa tela 
Menu:
escreva("Menu de Opções");
escreva("1 - Vetor Aleatório para multiplicação de 3 índices aleatórios ");
escreva("2 - Dois Vetores para soma dos elementos com lógica inversa");
escreva("3 - Vetor Aletório de Caracteres para localização e qtidade vezes");
escreva("4 - Sair do Sistema");
escreva("Digite a opção");
leia(op);

Caso (op) {

caso op == '1':{
  escreva("Gerando os valores aleatórios de 0 até 100.........");
  para(i=0;i<10;i=i+1){
   VetorAle[i] = randomização 0-100;}fimpara
  escreva("Gerando os valores aleatórios dos três índices do vetor[10]");  
   Ind1 = randomização 0-9;
   Ind2 = randomização 0-9;
   Ind3 = randomização 0-9; 
  
escreva("VetorAle[",Ind1,"] = ",VetorAle[Ind1]);
escreva("VetorAle[",Ind2,"] = ",VetorAle[Ind2]);
escreva("VetorAle[",Ind3,"] = ",VetorAle[Ind3]);
MultValindices = VetorAle[Ind1] * VetorAle[Ind2] * VetorAle[Ind3]
escreva("Multiplicação dos três valores do índices aleatórios: ",MultValindices);

escreva("Tecle enter para voltar ao menu:")
<enter>
goto Menu;
}//fim da opção 1

caso op == '2':{
escreva(" Entrada de dados Vetor1");
para(i=0;i<5;i=i+1){
escreva("Digite o valor do Vetor1[",i+1,"] :");
leia(Vetor1[i]);}fimpara

escreva(" Entrada de dados Vetor2");
para(i=0;i<5;i=i+1){
escreva("Digite o valor do Vetor2[",i+1,"] :");
leia(Vetor2[i]);}fimpara

//Soma para o Vetor3[5]
contador = 4;
para(i=0;i<5;i=i+1)
  Vetor3[i]  = Vetor1[i] + Vetor2[contador-i];}fimpara
  
escreva(" Mostrando os dados Vetor1");
para(i=0;i<5;i=i+1){
escreva("Vetor1[",i+1,"] :",Vetor1[i]);
}fimpara

escreva(" Mostrando os dados Vetor2");
para(i=0;i<5;i=i+1){
escreva("Vetor2[",i+1,"] :",Vetor2[i]);
}fimpara

escreva(" Mostrando os dados Vetor3");
para(i=0;i<5;i=i+1){
escreva("Vetor3[",i+1,"] :",Vetor3[i]);
}fimpara

escreva("Tecle enter para voltar ao menu:")
<enter>
goto Menu;

}//fim da opção 2


caso op == '3':{   

escreva("Gerando os valores aleatórios de caracteres tabela ASCII - 256 caracteres");
  para(i=0;i<13;i=i+1){
   VetorChar[i] = randomização 0-256 caractere;}fimpara

escreva("Digite o caracter desejado:" );
leia(caracter);
QtidadeVezes=0;
//localizador

para(i=0;i<13;i=i+1){
  se (caracter == VetorChar[i]) então
       escreva("VetorChar[",i,"]:",VetorChar[i]);
       QtidadeVezes = QtidadeVezes + 1;
	fimse
	}fimpara
	
escreva("A Qtidade de vezes que o caracter ",caracter," foi:",QtidadeVezes);	

escreva("Tecle enter para voltar ao menu:")
<enter>
goto Menu;
}//fim da opção 3


caso op == '4':{   
 sair do programa.
}//fim caso
}//fim do programa
*/

//converter para a linguagem C

#include<conio.h>
#include<stdio.h>
#include<iostream> //biblioteca que tem comandos C nativo e C++
#include<stdlib.h>
#include<locale.h>//para usar acentuação e Ç no código
#include<math.h>
#include<time.h>

using namespace std; //comando usado somente qdo usamos comando do C++ no C nativo

//Variáveis
//opção 1
int VetorAle[10];
int Ind1,Ind2,Ind3;
int MultValindices;

//opção 2
int Vetor1[5],Vetor2[5],Vetor3[5];
int contador;

//opção 3
char VetorChar[13];
char Caracter;
int QtidadeVezes;

char op;

//início
 main(){
 	 setlocale(LC_ALL,"portuguese");
    	
Menu:
system("cls");
printf("\n Menu de Opções");
printf("\n 1 - Vetor Aleatório para multiplicação de 3 índices aleatórios ");
printf("\n 2 - Dois Vetores para soma dos elementos com lógica inversa");
printf("\n 3 - Vetor Aletório de Caracteres para localização e qtidade vezes");
printf("\n 4 - Sair do Sistema");
printf("\nDigite a opção");
fflush(stdin);
scanf("%c",&op);


switch (op) {//caso 

case '1': {
  srand(time(NULL));	
  printf("\n Gerando os valores aleatórios de 0 até 100.........");
  for(int i=0;i<10;i++){
   VetorAle[i] = rand() % 100;
   printf("\n VetorAle[%d] = %d ",i,VetorAle[i]);}
  
  
  printf("\n Gerando os valores aleatórios dos três índices do vetor[10]");  
   srand(time(NULL));
   Ind1 = rand() % 10;
   Ind2 = rand() % 10;
   Ind3 = rand() % 10; 
  
printf("\n VetorAle[%d] = %d ",Ind1,VetorAle[Ind1]);
printf("\n VetorAle[%d] = %d ",Ind2,VetorAle[Ind2]);
printf("\n VetorAle[%d] = %d ",Ind3,VetorAle[Ind3]);
MultValindices = VetorAle[Ind1] * VetorAle[Ind2] * VetorAle[Ind3];
printf("\n Multiplicação dos três valores do índices aleatórios: %d ",MultValindices);

printf("\nTecle enter para voltar ao menu:");
getch();
goto Menu;

}//fim da opção 1
break;

case '2':{
printf("\n Entrada de dados Vetor1");
for(int i=0;i<5;i++){
printf("\n Digite o valor do Vetor1[%d] : ",i+1);
scanf("%d",&Vetor1[i]);}

printf("\n Entrada de dados Vetor2");
for(int i=0;i<5;i=i+1){
printf("\n Digite o valor do Vetor2[%d] : ",i+1);
scanf("%d",&Vetor2[i]);}

//Soma para o Vetor3[5]
contador = 4;
for(int i=0;i<5;i=i+1){
  Vetor3[i]  = Vetor1[i] + Vetor2[contador-i];}
  
printf("\n Mostrando os dados Vetor1");
for(int i=0;i<5;i=i+1){
printf("\n Vetor1[%d] : %d ",i+1,Vetor1[i]);
}

printf("\n Mostrando os dados Vetor2");
for(int i=0;i<5;i=i+1){
printf("\n Vetor2[%d] : %d ",i+1,Vetor2[i]);
}

printf("\n Mostrando os dados Vetor3");
for(int i=0;i<5;i=i+1){
printf("\n Vetor3[%d] : %d ",i+1,Vetor3[i]);
}

printf("\nTecle enter para voltar ao menu:");
getch();
goto Menu;

}//fim da opção 2
break;

case '3':{   

printf("\n Gerando os valores aleatórios de caracteres tabela ASCII - 256 caracteres");
srand(time(NULL));
  for(int i=0;i<13;i=i+1){
   VetorChar[i] = rand() % 256 ;
   printf("\n VetorChar[%d] : %c",i,VetorChar[i]);}

printf("\nDigite o caracter desejado:" );
fflush(stdin);
scanf("%c",&Caracter);
QtidadeVezes=0;
//localizador

for(int i=0;i<13;i=i+1){
 if (Caracter == VetorChar[i]) {
       printf("\n VetorChar[%d] : %c",i,VetorChar[i]);
       QtidadeVezes = QtidadeVezes + 1;
	}
	}
	
printf("\n A Qtidade de vezes que o caracter %c  foi %d ",Caracter,QtidadeVezes);	

printf("\n Tecle enter para voltar ao menu:");
getch();
goto Menu;
}//fim da opção 3
break;

default : 
 exit(0);//função para sair do programa
}//fim Switch
}//fim do programa