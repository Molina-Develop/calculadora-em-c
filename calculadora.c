#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao, usarDenovo;
    float num1, num2, resultado;

    do {
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("Escolha um desses com \"1\", \"2\", \"3\" ou \"4\": ");
        scanf("%d", &opcao);

        if (opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);

            printf("Digite o segundo numero: ");
            scanf("%f", &num2);

            switch (opcao) {
                case 1:
                    resultado = num1 + num2;
                    printf("Resultado: %.2f\n", resultado);
                    break;

                case 2:
                    resultado = num1 - num2;
                    printf("Resultado: %.2f\n", resultado);
                    break;

                case 3:
                    resultado = num1 * num2;
                    printf("Resultado: %.2f\n", resultado);
                    break;

                case 4:
                    if (num2 != 0) {
                        resultado = num1 / num2;
                        printf("Resultado: %.2f\n", resultado);
                    }
                    else {
                        printf("Nao e possivel dividir por zero.\n");
                    }
                    break;
            }
        }

        else {
            printf("Foi mal, por favor, selecione a opcao correta na proxima vez.\n");
        }

        printf("\nUsar novamente?\n");
        printf("1 - SIM / 2 - NAO\n");
        printf("Comando: ");
        scanf(" %d", &usarDenovo);

        printf("\n"); //Faz com que o menu de opções não fique colado com o conteúdo anterior
    } while (usarDenovo == 1);

    system("pause");
    return 0;
}
