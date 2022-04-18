#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int Matriz[10][20];
char op;
int Maior;

int main(void)
{
     system("cls");

 printf(" Entrada de Dados");
 printf("n n");

 printf(" Entradas de dados Matriz[10][20]");
 printf("n n");

 for(int c = 0; c <10; c++){
 for(int l= 0; l < 20; l++){
    printf ("Entre com o valor Matriz[10][20]");
    printf (" n n ");
    }

    srand(time(0));
    for (int c = 0; c < 10; c++){

    for (int l = 0; l < 20; l++){
        Matriz[c][l] = rand() % 200 - 100;
        printf("\n Matriz[%i][%i]= %i \n",c, l, Matriz[c][l]);

}
}
 
Menu:
    system("cls");
printf("\n Menu de Matrizes \n");
printf("\n 1) Preencha a matriz por leitura");
printf("\n 2) Procure e imprima o maior elemento de cada linha da matriz");
printf("\n 3) Calcula e imprima a media dos elementos de cada coluna");
printf("\n 4) Calcule e imprima o produto de todos os elementos diferentes de zero");
printf("\n 5) Conte e imprima quantos elementos são negativos");
printf("\n 6) Informe qual a posicao ocupada (linha-coluna) por um determinado elemento cujo valor sera lido pelo programa");
 printf("\n 7) Sair do sistema");
    printf("\n Digite sua Opcao: ");
scanf("%i", & op);
    fflush(stdin);


  
  system("cls");
    srand(time(0));
    for (int c = 0; c < 10; c++){

    for (int l = 0; l < 20; l++){
        Matriz[c][l] = rand() % 200 - 100;
        printf("\n Matriz[%i][%i]= %i \n",c, l, Matriz[c][l]);
    }
}
}

if (op == 1) {
    system("cls");
    printf (" Maior Elemento de cada matriz");

    for (int c= 0; c <10 ; c++){
    for (int l= 0; l < 20; c++){
        printf("Matriz[%i][%i]= %i ", c, l, Matriz[c][l]);
        }
}
printf("Tecle enter para voltar ao Menu Principal");
getch();
goto Menu;
} 


}