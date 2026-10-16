#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


float soma(float a, float b){
return  a + b;
}

float subtrair(float a, float b){
return  a - b;
}

float multiplicacao(float a, float b){
return  a * b;
}

float divisao(float a, float b){
return  a / b ;
}

float porcentagem(float a, float b){
return (a * b) /100;
}

int main(){

SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);


float a, b, resultado;
int escolha;
int tabuada1;
int tabuada2;
int opcao; //essa variável serve apenas pro while

do {
        system("cls");
    printf("  ██████╗  ████╗  ██╗        ██████╗██╗   ██╗██╗        ████╗  ██████╗    ████╗  ██████╗    ████╗  \n");
    printf("██╔═════╝██╔═══██╗██║      ██╔═════╝██║   ██║██║      ██╔═══██╗██╔═══██╗██╔═══██╗██╔═══██╗██╔═══██╗\n");
    printf("██║      ████████║██║      ██║      ██║   ██║██║      ████████║██║   ██║██║   ██║██████╔═╝████████║\n");
    printf("██║      ██╔═══██║██║      ██║      ██║   ██║██║      ██╔═══██║██║   ██║██║   ██║██╔═██║  ██╔═══██║\n");
    printf("╚═██████╗██║   ██║████████╗╚═██████╗╚═████╔═╝████████╗██║   ██║██████╔═╝╚═████╔═╝██║ ╚═██╗██║   ██║\n");
    printf("  ╚═════╝╚═╝   ╚═╝╚═══════╝  ╚═════╝  ╚═══╝  ╚═══════╝╚═╝   ╚═╝╚═════╝    ╚═══╝  ╚═╝   ╚═╝╚═╝   ╚═╝\n");
    printf("---------------------------------------------------------------------------------------------------\n");

printf("Digite o primeiro numero: ");
scanf("%f", &a);
printf("Digite o segundo numero: ");
scanf("%f", &b);
printf("--------------------------\n");
printf("\nSistema de operações\n");
printf("\nOpção 1 (Adição +)");
printf("\nOpção 2 (Subtração -)");
printf("\nOpção 3 (Multiplicação *)");
printf("\nOpção 4 (Divisão /)");
printf("\nOpção 5 (Porcentagem %)");
printf("\n-----------------------\n");
printf("\nEscolha de operação:\n ");
scanf("%d", &escolha);

switch(escolha){
case 1:
    system("cls");
  resultado = soma(a, b);
    getchar();
    break;



    case 2:
        system("cls");
 resultado = subtrair(a, b);
    getchar();
    break;


    case 3:
        system("cls");
   resultado = multiplicacao(a, b);
    getchar();
    break;


    case 4:
        system("cls");
          if (b == 0) {
        SetConsoleTextAttribute(console, 12);
        printf("\nErro: nao e possivel dividir por zero!\n");
        SetConsoleTextAttribute(console, 15);
    } else {
        resultado = divisao(a, b);
    }
    break;




    case 5:

        system("cls");
      resultado = porcentagem(a, b);

        break;



    default:
        system("cls");
    printf("\nOpss, opção inválida!!\n");
    break;

}

printf("--------------------\n");
printf("O resultado é: %.2f\n", resultado);
printf("--------------------\n");
printf("\nOpção 1: (Nova operação)\n");
printf("Opção 2: (Sair)");
printf("\n\nOpção: ");
scanf("%d", &opcao);
} while (opcao != 2);


return 0;
}
