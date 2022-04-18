/*Construa um algoritmo com duas matrizes quadradas de 3x3 com valores inteiros. Gerar um menu de
opþ§es:
1 - Gerar um matriz resultante da soma das duas matrizes elemento a elemento, mostrando as trÛs 
2 - Gerar um matriz resultante da multiplicaþÒo das duas matrizes elemento a elemento invertido,mostrando as trÛs
3 - Pedir ao usußrio um valor e localizar nas duas matrizes iniciais se este existe e sua localizaþÒo.
4 - Sair do MatrizesQuadradas3x3Sistema.

Algoritmo 

Variaveis

MA[3][3] tipo inteira;
MB[3][3] tipo inteira;
MS[3][3] tipo inteira;
MM[3][3] tipo inteira;
op tipo inteiro;
Valor tipo inteiro;

Inicio
limpa tela
Entrada: escreval("Entrada de Dados nas Matrizes");
     
     escreval("Entrada de Dados MA[3][3]");
     para(x=0;x<3;x=x+1){
      para(y=0;y,3;y=y+1){
        escreval("Entre com o valor da MA[",x,"][",y,"]: ");
        leia(MA[x][y]);}}
    
	escreval("      ");
	
    escreval("Entrada de Dados MB[3][3]");
     para(x=0;x<3;x=x+1){
      para(y=0;y,3;y=y+1){
        escreval("Entre com o valor da MB[",x,"][",y,"]: ");
        leia(MB[x][y]);}}       
	escreval("      ");
Menu:
escreval("Menu de Opþ§es de operaþ§es com Matrizes");
escreval("1 - Gerar um matriz resultante da soma das duas matrizes elemento a elemento, mostrando as trÛs");
escreval("2 - Gerar um matriz resultante da multiplicaþÒo das duas matrizes elemento a elemento invertido,mostrando as trÛs");
escreval("3 - Pedir ao usußrio um valor e localizar nas duas matrizes iniciais se este existe e sua localizaþÒo");
escreval("4 - Sair do Sistema");
escreval("Digite a opþÒo: ");
leia(op);

se(op == 1){ escreval("1 - Soma das Matrizes");

escreval("MA[3][3]");
para(x=0;x<3;x=x+1){
  para(y=0;y,3;y=y+1){
        escreval("MA[",x,"][",y,"]:",MA[x][y]);
    }}
    
escreval("MB[3][3]");
para(x=0;x<3;x=x+1){
  para(y=0;y,3;y=y+1){
        escreval("MB[",x,"][",y,"]:",MB[x][y]);
    }}
    
escreval("MS[3][3]");
para(x=0;x<3;x=x+1){
  para(y=0;y,3;y=y+1){
        MS[x][y] = MA[x][y] + MB[x][y];
        escreval("MS[",x,"][",y,"]:",MS[x][y]);
    }}
    
escreval("tecle enter apara voltar ao Menu................. ");
leia(); Va para Menu;

}fimse

se(op == 2){ escreval("2 - MultiplicaþÒo invertida das Matrizes");

  
escreval("MA[3][3]");
para(x=0;x<3;x=x+1){
  para(y=0;y,3;y=y+1){
        escreval("MA[",x,"][",y,"]:",MA[x][y]);
    }}
    
escreval("MB[3][3]");
para(x=0;x<3;x=x+1){
  para(y=0;y,3;y=y+1){
        escreval("MB[",x,"][",y,"]:",MB[x][y]);
    }}
    
escreval("MM[3][3]");
para(x=0;x<3;x=x+1){
  para(y=0;y,3;y=y+1){
        MM[x][y] = MA[x][y] * MB[2-x][2-y];
        escreval("MM[",x,"][",y,"]:",MM[x][y]);
    }}
escreval("tecle enter apara voltar ao Menu................. ");
leia(); Va para Menu;
    
}fimse

se(op == 3){ escreval("3 - Localizaþao de um valor nas Matrizes");

escreval("MA[3][3]");
para(x=0;x<3;x=x+1){
  para(y=0;y,3;y=y+1){
        escreval("MA[",x,"][",y,"]:",MA[x][y]);
    }}
    
escreval("MB[3][3]");
para(x=0;x<3;x=x+1){
  para(y=0;y,3;y=y+1){
        escreval("MB[",x,"][",y,"]:",MB[x][y]);
    }}
 
escreval("Digite o valor inteiro a ser localizado nas matrizes MA[3][3] e MB[3][3]");
leia(Valor);
escreval("localizando o valor nas matrizes.......");
AchouMA = 0;
AchouMB = 0;
para(x=0;x<3;x=x+1){
  para(y=0;y,3;y=y+1){
      se(valor == MA[x][y]){
       escreval("Valor: ",Valor, localizado na MA[",x,"][",y,"]:",MA[x][y]);
       AchouMA=1;
	   }fimse
      se(valor == MB[x][y]){
       escreval("Valor: ",Valor, localizado na MB[",x,"][",y,"]:",MB[x][y]);
	   AchouMB=1;}fimse
}}fimpara

Se (AchouMA == 0){
  escreval("Valor = ",Valor," NÒo localizado na MA[3][3]"):}fimse
	   
Se (AchouMB == 0){
  escreval("Valor = ",Valor," NÒo localizado na MB[3][3]"):}fimse
    
escreval("tecle enter apara voltar ao Menu................. ");
leia(); Va para Menu;

}fimse


se(op == 4){escreval("Novos dados de entrada - tecle enter................. ");
leia(); Va para Entrada;


se(op == 5){ escreval("Saindo do Sistema - tecle enter................. ");
leia();
sair(0);}

}fimlagoritmo*/

#include<conio.h>

#include<stdio.h>

#include<iostream>

#include<stdlib.h>

#include<locale.h>

#include<math.h>

int MA[3][3];
int MB[3][3];
int MS[3][3];
int MM[3][3];
int op;
int Valor;

main() {
  do {
    setlocale(LC_ALL, "portuguese"); //para usar acentuaþÒo e Ã no c¾digo
    system("cls");

    printf(" \n ...::: Entrada de Dados nas Matrizes :::... ");

    printf("\n \n");

    printf(" \n - Entrada de Dados MA[3][3] -");

    printf("\n \n");

    for (int x = 0; x < 3; x++) {
      for (int y = 0; y < 3; y++) {
        printf(" \n Entre com o valor da MA[%i][%i]: ", x, y);
        scanf("%i", & MA[x][y]);
      }
    }

    printf(" \n Entrada de Dados MB[3][3] ");
    for (int x = 0; x < 3; x++) {
      for (int y = 0; y < 3; y++) {
        printf(" \n Entre com o valor da MB[%i][%i]: ", x, y);
        scanf("%i", & MB[x][y]);
      }
    }

    Menu:
      system("cls");
    printf("\n Menu de Opþ§es de operaþ§es com Matrizes \n");
    printf("\n 1) Gerar um matriz resultante da soma das duas matrizes elemento a elemento, mostrando as trÛs");
    printf("\n 2) Gerar um matriz resultante da multiplicaþÒo das duas matrizes elemento a elemento invertido,mostrando as trÛs");
    printf("\n 3) Pedir ao usußrio um valor e localizar nas duas matrizes iniciais se este existe e sua localizaþÒo");
    printf("\n 4) Sair do sistema");
    printf("\n DIGITE A OPCAO: ");
    scanf("%i", & op);
    fflush(stdin);

    // OPCAO 1
    if (op == 1) {
      printf(" \n 1 SOMA DAS MATRIZES");

      printf("\n \n");

      printf(" \n ...::: MA[3][3] :::... ");

      printf("\n \n");

      for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
          printf(" \n MA[%i][%i] = %i ", x, y, MA[x][y]);
        }
      }

      printf("\n \n");

      printf(" \n ...::: MB[3][3] :::...");

      printf("\n \n");

      for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
          printf(" \n MB[%i][%i] = %i ", x, y, MB[x][y]);
        }
      }

      printf("\n \n");

      printf(" \n ...::: MS[3][3] :::...");

      printf("\n \n");

      for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
          MS[x][y] = MA[x][y] + MB[x][y];

          printf(" \n MS[%i][%i] = %i ", x, y, MS[x][y]);

        }
      }

      printf("\n\n  tecle enter para voltar ao Menu");
      getch();
      goto Menu;
    } //FIM OPCAO 1

    // OPCAO 2
    if (op == 2) {
      printf(" \n 2 MULTIPLICACAO DAS MATRIZES");

      printf("\n \n");

      printf(" \n ...::: MA[3][3] :::... ");

      printf("\n \n");

      for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
          printf(" \n MA[%i][%i] = %i ", x, y, MA[x][y]);
        }
      }

      printf("\n \n");

      printf(" \n ...::: MB[3][3] :::...");

      printf("\n \n");

      for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
          printf(" \n MB[%i][%i] = %i ", x, y, MB[x][y]);
        }
      }

      printf("\n \n");

      printf(" \n ...::: MM[3][3] :::...");

      printf("\n \n");

      for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
          MM[x][y] = MA[x][y] * MB[2 - x][2 - y];

          printf(" \n MM[%i][%i] = %i ", x, y, MM[x][y]);

        }
      }

      printf("\n\n  tecle enter para voltar ao Menu");
      getch();
      goto Menu;
    } //FIM OPCAO 2

    // OPCAO 3
    if (op == 3) {
      printf(" \n 3 LOCALIZACAO DE UM VALOR NAS MATRIZES");

      printf("\n \n");

      printf(" \n ...::: MA[3][3] :::... ");

      printf("\n \n");

      for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
          printf(" \n MA[%i][%i] = %i ", x, y, MA[x][y]);
        }
      }

      printf("\n \n");

      printf(" \n ...::: MB[3][3] :::...");

      printf("\n \n");

      for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
          printf(" \n MB[%i][%i] = %i ", x, y, MB[x][y]);
        }
      }

      printf("\n \n");

      printf("\n Digite o valor inteiro a ser localizado nas matrizes MA[3][3] e MB[3][3]");
      scanf("%i", & Valor);

      printf("\n \n");

      printf("\n Localizando o valor nas matrizes.......");

      int AchouMA = 0;
      int AchouMB = 0;

      for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
          if (Valor == MA[x][y]) {
            printf(" \n Valor %i localizado na MA[%i][%i] = %i ", Valor, x, y, MA[x][y]);
            AchouMA++;
          }

          if (Valor == MB[x][y]) {
            printf(" \n Valor %i localizado na MB[%i][%i] = %i ", Valor, x, y, MB[x][y]);
            AchouMB++;
          }
        }
      }

      printf("\n\n  tecle enter para voltar ao Menu");
      getch();
      goto Menu;
    } //FIM OPCAO 3

    if (op == 4) {
      exit(0);
    } //fim opcao

    printf("\n \n");
    printf(" \n Deseja calcular novos valores? Tecle <S> para sim ou <N> para nÒo. ");
    fflush(stdin);
    scanf("%c", & op);
    op = toupper(op);
  }
  while (op != 'N');
}




