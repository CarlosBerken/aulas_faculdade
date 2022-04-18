/* Uma empresa concederá um aumento de salário aos seus funcionários,
variável de acordo com o cargo, conforme a tabela abaixo. Faça um algoritmo
que leia o salário e o cargo de um funcionário e calcule o novo salário. Se o
cargo do funcionário não estiver na tabela, ele deverá, então, receber 40% de
aumento. Mostre o salário antigo, o novo salário e a diferença. */

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string.h>

float Salario;
float Aumento;
float SalarioFinal;
char Cargo[30];
char Calculo;

int main(void)
{
    do
    {
        system("cls");
        printf("\n==============================================================");
        printf("\nDigite o salario do funcionario:");
        printf("\n==============================================================\n");
        scanf("%f", &Salario);

        system("cls");
        printf("\n==============================================================");
        printf("\nDigite o nome do cargo do funcionario:");
        printf("\nGerente.");
        printf("\nEngenheiro.");
        printf("\nTecnico.");
        printf("\nOutro Cargo.");
        printf("\n==============================================================\n");
        scanf("%s", &Cargo);

        if (strcmp(Cargo, "Gerente") == 0)
        {
            Aumento = Salario * 0.1;
            SalarioFinal = Salario + Aumento;
            system("cls");
            printf("\n==============================================================");
            printf("\nO funcionario recebia um salario de R$%.2f.", Salario);
            printf("\nO Cargo do funcionario e %s, por isso recebeu um aumento de 10%c, ou seja, R$%.2f.", Cargo, 37, Aumento);
            printf("\nO funcionario passou a ganhar: R$%.2f em seu salario final.", SalarioFinal);
            printf("\n==============================================================");
        }

        if (strcmp(Cargo, "Engenheiro") == 0)
        {
            Aumento = Salario * 0.2;
            SalarioFinal = Salario + Aumento;
            system("cls");
            printf("\n==============================================================");
            printf("\nO funcionario recebia um salario de R$%.2f.", Salario);
            printf("\nO Cargo do funcionario e %s, por isso recebeu um aumento de 20%c, ou seja, R$%.2f.", Cargo, 37, Aumento);
            printf("\nO funcionario passou a ganhar: R$%.2f em seu salario final.", SalarioFinal);
            printf("\n==============================================================");
        }

        if (strcmp(Cargo, "Tecnico") == 0)
        {
            Aumento = Salario * 0.3;
            SalarioFinal = Salario + Aumento;
            system("cls");
            printf("\n==============================================================");
            printf("\nO funcionario recebia um salario de R$%.2f.", Salario);
            printf("\nO Cargo do funcionario e %s, por isso recebeu um aumento de 30%c, ou seja, R$%.2f.", Cargo, 37, Aumento);
            printf("\nO Funcionario passou a ganhar: R$%.2f em seu salario final.", SalarioFinal);
            printf("\n==============================================================");
        }

        if (strcmp(Cargo, "Gerente") != 0 && strcmp(Cargo, "Engenheiro") != 0 && strcmp(Cargo, "Tecnico") != 0)
        {
            Aumento = Salario * 0.4;
            SalarioFinal = Salario + Aumento;
            system("cls");
            printf("\n==============================================================");
            printf("\nO funcionario recebia um salario de R$%.2f.", Salario);
            printf("\nO Cargo do funcionario e %s, por isso recebeu um aumento de 40%c, ou seja, R$%.2f.", Cargo, 37, Aumento);
            printf("\nO Funcionario passou a ganhar: R$%.2f em seu salario final.", SalarioFinal);
            printf("\n==============================================================");
        }
        printf("\nDeseja fazer um novo calculo? Digite <S> ou <N>.");
        printf("\n==============================================================\n");
        scanf("%s", &Calculo);
        Calculo = toupper(Calculo);

    } while (Calculo != 'N');
}