#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <windows.h>

#define Qt_de_numeros 5

/*
    Jorge Miguel
    Luiz Otávio
    Pedro Theobaldo

    Programação Avançada
*/

typedef struct no
{
    int dado;
    struct no *proximo;
}No;

void tela_inicial();


void imprimir_fila(No *fila)
{
    Sleep(200);
    printf("\n\n");
    printf("\t\t\t\tSequencia numerica: ");

    Sleep(300);

    while(fila)
    {
        printf("%d, ", fila -> dado);
        fila = fila -> proximo;
    }

    Sleep(300);
    printf("\n\n");
}

void inserir_na_fila(No **fila, int val)
{
    No *aux, *novo = malloc(sizeof(No));

    if(novo != NULL)
    {
        novo -> dado = val;
        novo -> proximo = NULL;

        if(*fila == NULL)
            *fila = novo;
        else
        {
            aux = *fila;

            while(aux -> proximo)
                aux = aux -> proximo;
            aux -> proximo = novo;
        }
    }
    else
        printf("\n\nErro ao alocar memoria!\n");
}

void zerar_fila(No **fila)
{
    No *remover = NULL;

    while(*fila)
    {
        remover = *fila;
        *fila = remover -> proximo;
        free(remover);
    }
}

void acerto(char texto[30])
{
    char acerto1[] = "\n\n\t\t\t\tAcertou na mosca... Voce ta se achando em...\n\n";
    char acerto2[] = "\n\n\t\t\t\tAcertou! Como assim????? Isso nao ficara assim.\n\n";
    char acerto3[] = "\n\n\t\t\t\tAcertou!\n\t\t\t\t...\n\n";
    char acerto4[] = "\n\n\t\t\t\tAcertou! Vc esta trapaceando???\n\n";
    char acerto5[] = "\n\n\t\t\t\tAcertou zeh ruela\n\n";
    char acerto6[] = "\n\n\t\t\t\tAcertou na mosca em zeh chupeta...\n\n";
    char acerto7[] = "\n\n\t\t\t\tAcertou...\n\n";
    char acerto8[] = "\n\n\t\t\t\tComo assim vc acertou??!!\n\n";
    char acerto9[] = "\n\n\t\t\t\tNao fique se achando soh pq acertou essa\n\n";
    char acerto10[] = "\n\n\t\t\t\tOlha soh! Ele acertou essa!\n\n";

    switch(rand()%10)
    {
        case 0:
            strcpy(texto, acerto1);
        break;
        case 1:
            strcpy(texto, acerto2);
        break;
        case 2:
            strcpy(texto, acerto3);
        break;
        case 3:
            strcpy(texto, acerto4);
        break;
        case 4:
            strcpy(texto, acerto5);
        break;
        case 5:
            strcpy(texto, acerto6);
        break;
        case 6:
            strcpy(texto, acerto7);
        break;
        case 7:
            strcpy(texto, acerto8);
        break;
        case 8:
            strcpy(texto, acerto9);
        break;
        case 9:
            strcpy(texto, acerto10);
        break;
    }
}

void erro(char texto[30])
{
    char erro1[] = "\n\n\t\t\t\tErrou!! Mas e uma toupeira mesmo!\n\n";
    char erro2[] = "\n\n\t\t\t\tErrou!! Tu e ruim demais!!!!\n\n";
    char erro3[] = "\n\n\t\t\t\tErrou!! Vc esta sendo humilhado...\n\n";
    char erro4[] = "\n\n\t\t\t\tErrou!! Vc eh muito ruim!!!...\n\n";
    char erro5[] = "\n\n\t\t\t\tErrou zeh ruela...\n\n";
    char erro6[] = "\n\n\t\t\t\tVoce eh burro demais\n\n";
    char erro7[] = "\n\n\t\t\t\tPerdeu!!\n\n";
    char erro8[] = "\n\n\t\t\t\tErrou manezao...\n\n";
    char erro9[] = "\n\n\t\t\t\tErrou seu pau no ku!\n\n";
    char erro10[] = "\n\n\t\t\t\tErrou... Que triste :(\n\n";

    switch(rand()%10)
    {
        case 0:
            strcpy(texto, erro1);
        break;
        case 1:
            strcpy(texto, erro2);
        break;
        case 2:
            strcpy(texto, erro3);
        break;
        case 3:
            strcpy(texto, erro4);
        break;
        case 4:
            strcpy(texto, erro5);
        break;
        case 5:
            strcpy(texto, erro6);
        break;
        case 6:
            strcpy(texto, erro7);
        break;
        case 7:
            strcpy(texto, erro8);
        break;
        case 8:
            strcpy(texto, erro9);
        break;
        case 9:
            strcpy(texto, erro10);
        break;
    }
}

void fim_do_jogo()
{
    /*
        Tela de Game Over
    */

    system("cls");

    printf("\n\n\n\n");
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,219,219,219,177,176,32,32,32,32,32,32,219,219,219,219,177,176,32,32,32,32,219,219,219,177,176,32,32,219,219,219,177,176,32,219,219,219,219,219,219,219,219,177,176);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,177,176,32,32,32,32,32,32,32,32,32,219,219,177,176,219,219,177,176,32,32,32,219,219,219,219,177,176,219,219,219,219,177,176,32,219,219,177,176);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,177,176,32,32,32,32,32,32,32,32,219,219,177,176,32,32,219,219,177,176,32,32,219,219,177,219,219,219,219,177,219,219,177,176,32,219,219,219,219,219,219,177,176);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,177,176,219,219,219,219,177,176,32,32,219,219,219,219,219,219,219,219,177,176,32,32,219,219,177,176,219,219,177,176,219,219,177,176,32,219,219,177,176);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,32,32,32,32,219,219,177,176,32,219,219,177,176,32,32,32,32,219,219,177,176,32,219,219,177,176);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,219,219,219,219,177,176,32,32,219,219,177,176,32,32,32,32,219,219,177,176,32,219,219,177,176,32,32,32,32,219,219,177,176,32,219,219,219,219,219,219,219,219,177,176);
    printf("\n");
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,219,219,219,219,177,176,32,32,219,219,177,176,32,32,32,219,219,177,176,32,219,219,219,219,219,219,219,219,177,176,32,219,219,219,219,219,219,219,177,176);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,32,32,32,219,219,177,176,32,219,219,177,176,32,32,32,32,32,32,32,219,219,177,176,32,32,219,219,177,176);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,177,176,32,32,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,32,32,219,219,219,219,219,219,177,176,32,32,32,219,219,177,176,32,32,219,219,177,176);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,177,176,32,32,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,32,32,219,219,177,176,32,32,32,32,32,32,32,219,219,219,219,219,219,219,177,176);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,177,176,32,32,219,219,177,176,32,32,32,219,219,177,219,219,177,176,32,32,32,219,219,177,176,32,32,32,32,32,32,32,219,219,177,176,32,32,219,219,177,176);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,219,219,219,219,177,176,32,32,32,32,32,219,219,219,177,176,32,32,32,32,219,219,219,219,219,219,219,219,177,176,32,219,219,177,176,32,32,219,219,177,176);

    printf("\t\t\t\t------------------------------------------------------");

    printf("\n\n");
    printf("\t\t\t\t\t     Joga direito da pr%cxima vez\n", 162);

    getch();
    system("cls");

    tela_inicial();
}

void jogo()
{
    int val_aleat1 = 25;
    int val_aleat2 = 10;
    int val_principal; // Valor primário a ser sorteado
    int val_aux1; // Valor secundário a ser sorteado
    int val_aux2 = 0; // Valor auxiliar para determinar se um valor é primo ou não
    int i = 0, a, acertos = 0, tentativas = 3;
    int val_sequencial1, val_sequencial2, val_sequencial3;
    int valor_informado; // Valor que o usuário informa
    int round = 1; // Quantidade de rounds prosseguidos

    char errou[30];
    char acertou[30];

    No *fila = NULL;

    for(;;)
    {
        val_principal = rand()%val_aleat1;

        val_aux1 = rand()%val_aleat2;

        if((rand()%2) == 0)
            val_principal = -val_principal;

        if((rand()%2) == 0)
            val_aux1 = -val_aux1;

        // Sorteia a operação a ser realizada (0 - 7)
        switch(rand()%8)
        {
            // Soma o valor primário com o valor secundário
            case 0:
                do
                {
                    inserir_na_fila(&fila, val_principal);

                    val_principal = val_principal + val_aux1;
                    i++;

                }while(i < Qt_de_numeros);
                val_sequencial1 = val_principal;
                val_sequencial2 = val_sequencial1 + val_aux1;
                val_sequencial3 = val_sequencial2 + val_aux1;

            break;

            // Subtrai o valor primário com o valor secundário
            case 1:
                do
                {
                    inserir_na_fila(&fila, val_principal);

                    val_principal = val_principal - val_aux1;
                    i++;

                }while(i < Qt_de_numeros);
                val_sequencial1 = val_principal;
                val_sequencial2 = val_sequencial1 - val_aux1;
                val_sequencial3 = val_sequencial2 - val_aux1;

            break;

            // Multiplica o valor primário com o valor secundário
            case 2:
                do
                {
                    inserir_na_fila(&fila, val_principal);

                    val_principal = val_principal * val_aux1;
                    i++;

                }while(i < Qt_de_numeros);
                val_sequencial1 = val_principal;
                val_sequencial2 = val_sequencial1 * val_aux1;
                val_sequencial3 = val_sequencial2 * val_aux1;

            break;

            // Pega o próximo valor par/ímpar com relação ao valor primário
            case 3:
                do
                {
                    inserir_na_fila(&fila, val_principal);

                    if(val_principal < 0)
                        val_principal = val_principal - 2;
                    else
                        val_principal = val_principal + 2;

                    i++;

                }while(i < Qt_de_numeros);

                val_sequencial1 = val_principal;

                if(val_sequencial1 < 0)
                    val_sequencial2 = val_sequencial1 - 2;
                else
                    val_sequencial2 = val_sequencial1 + 2;

                if(val_sequencial2 < 0)
                    val_sequencial3 = val_sequencial2 - 2;
                else
                    val_sequencial3 = val_sequencial2 + 2;

            break;

            // Soma o valor primário ao seu próximo valor par/ímpar
            case 4:
                do
                {
                    inserir_na_fila(&fila, val_principal);

                    if(val_principal < 0)
                        val_principal = val_principal + (val_principal - 2);
                    else
                        val_principal = val_principal + (val_principal + 2);

                    i++;

                }while(i < Qt_de_numeros);

                val_sequencial1 = val_principal;

                if(val_sequencial1 < 0)
                    val_sequencial2 = val_sequencial1 + (val_sequencial1 - 2);
                else
                    val_sequencial2 = val_sequencial1 + (val_sequencial1 + 2);

                if(val_sequencial2 < 0)
                    val_sequencial3 = val_sequencial2 + (val_sequencial2 - 2);
                else
                    val_sequencial3 = val_sequencial2 + (val_sequencial2 + 2);

            break;

            // Subtrai o valor primário ao seu próximo valor par/ímpar
            case 5:
                do
                {
                    inserir_na_fila(&fila, val_principal);

                    if(val_principal < 0)
                        val_principal = val_principal - (val_principal - 2);
                    else
                        val_principal = val_principal - (val_principal + 2);

                    i++;

                }while(i < Qt_de_numeros);

                val_sequencial1 = val_principal;

                if(val_sequencial1 < 0)
                    val_sequencial2 = val_sequencial1 - (val_sequencial1 - 2);
                else
                    val_sequencial2 = val_sequencial1 - (val_sequencial1 + 2);

                if(val_sequencial2 < 0)
                    val_sequencial3 = val_sequencial2 - (val_sequencial2 - 2);
                else
                    val_sequencial3 = val_sequencial2 - (val_sequencial2 + 2);

            break;

            // Soma o valor primário ao seu sucessor
            case 6:
                do
                {
                    inserir_na_fila(&fila, val_principal);

                    val_principal = val_principal + (val_principal++);

                    i++;

                }while(i < Qt_de_numeros);

                val_sequencial1 = val_principal;
                val_sequencial2 = val_sequencial1 + (val_sequencial1+1);
                val_sequencial3 = val_sequencial2 + (val_sequencial2+1);

            break;

            // Soma o valor primário ao seu antecessor
            case 7:
                do
                {
                    inserir_na_fila(&fila, val_principal);

                    val_principal = val_principal + (val_principal--);

                    i++;

                }while(i < Qt_de_numeros);

                val_sequencial1 = val_principal;
                val_sequencial2 = val_sequencial1 + (val_sequencial1-1);
                val_sequencial3 = val_sequencial2 + (val_sequencial2-1);

            break;
        }

        printf("\n\t\t\t\t\t\tRound: %d", round);
        imprimir_fila(fila);

        /*
        printf("%d\n", val_sequencial1);
        printf("%d\n", val_sequencial2);
        printf("%d\n", val_sequencial3);
        */

        //****************************************************************************************************************************

        Sleep(300);

        printf("\n\t\t\t\tInforme o 1%c valor sequencial.\n", 167);

        do
        {
            Sleep(300);
            printf("\nTentativas restantes: %d\n", tentativas);

            if(acertos != 0)
                printf("Acertos: %d\n", acertos);

            printf("Entre com o valor: ");
            scanf("%d", &valor_informado);

            if(valor_informado != val_sequencial1)
            {
                erro(errou);
                printf("%s", errou);

                getch();
                tentativas--;

                if(tentativas == 0)
                {
                    zerar_fila(&fila);
                    fim_do_jogo();
                }

            }
            else
            {
                acerto(acertou);
                printf("%s", acertou);

                getch();
                acertos++;

                system("cls");
                inserir_na_fila(&fila, valor_informado);

                printf("\n\t\t\t\t\t\tRound: %d", round);
                imprimir_fila(fila);
            }
        }while(valor_informado != val_sequencial1);

        //****************************************************************************************************************************

        printf("\n\t\t\t\tInforme o 2%c valor sequencial.\n", 167);

        do
        {
            Sleep(300);
            printf("\nTentativas restantes: %d\n", tentativas);

            if(acertos != 0)
                printf("Acertos: %d\n", acertos);

            printf("Entre com o valor: ");
            scanf("%d", &valor_informado);

            if(valor_informado != val_sequencial2)
            {
                erro(errou);
                printf("%s", errou);

                getch();
                tentativas--;

                if(tentativas == 0)
                {
                    zerar_fila(&fila);
                    fim_do_jogo();
                }

            }
            else
            {
                acerto(acertou);
                printf("%s", acertou);

                getch();
                acertos++;

                system("cls");
                inserir_na_fila(&fila, valor_informado);

                printf("\n\t\t\t\t\t\tRound: %d", round);
                imprimir_fila(fila);
            }
        }while(valor_informado != val_sequencial2);

        //****************************************************************************************************************************

        printf("\n\t\t\t\tInforme o 3%c valor sequencial:\n", 167);

        do
        {
            Sleep(300);
            printf("\nTentativas restantes: %d\n", tentativas);

            if(acertos != 0)
                printf("Acertos: %d\n", acertos);

            printf("Entre com o valor: ");
            scanf("%d", &valor_informado);

            if(valor_informado != val_sequencial3)
            {
                erro(errou);
                printf("%s", errou);

                getch();
                tentativas--;

                if(tentativas == 0)
                {
                    zerar_fila(&fila);
                    fim_do_jogo();
                }

            }
            else
            {
                acerto(acertou);
                printf("%s", acertou);

                getch();
                acertos++;

                system("cls");

                printf("\n\t\t\t\t\t\tRound: %d", round);
                inserir_na_fila(&fila, valor_informado);
            }
        }while(valor_informado != val_sequencial3);

        //****************************************************************************************************************************

        system("cls");

        val_aleat1 += 3; // A cada round prosseguido adiciona +3 ao valor máximo que um valor será sorteado
        val_aleat2 += 3; // A cada round prosseguido adiciona +3 ao valor máximo que um valor será sorteado
        tentativas = 3; // Atualiza quantidade de tentativas para 3
        round += 1; // Acrescenta +1 ao round
        i = 0; // Reseta o valor da variável auxiliar i

        zerar_fila(&fila);
    }
}

void tela_inicial()
{
    char opc = ' ';

    do
    {
        printf("\n\n\n\n");
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 32,32,32,32,32,32,32,219,219,219,219,219,219,219,219,177,176,32,32,219,219,219,219,219,219,177,176,32,32,32,219,219,219,219,219,177,176,32,32,32,32,219,219,219,219,219,219,177,176,32,32,32,32,32,32,32,32,32,32,32,32,219,219,219,219,219,219,177,176,32,32,32,32,32,219,219,219,219,177,176);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 32,32,32,32,32,32,32,32,32,32,32,219,219,177,176,32,32,32,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,32,32,32,32,32,32,32,219,219,177,176,32,32,219,219,177,176,32,32,32,32,32,32,32,32,32,32,32,219,219,177,176,32,219,219,177,176,32,32,32,219,219,177,176,219,219,177,176);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 32,32,32,32,32,32,32,32,32,32,32,219,219,177,176,32,32,32,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,32,32,32,32,32,32,32,219,219,177,176,32,32,219,219,177,176,32,32,32,32,32,32,32,32,32,32,32,219,219,177,176,32,219,219,177,176,32,32,219,219,177,176,32,32,219,219,177,176);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 32,32,32,32,32,32,32,219,219,177,176,219,219,177,176,32,32,32,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,219,219,219,219,177,176,32,219,219,177,176,32,32,219,219,177,176,32,32,32,32,32,32,32,32,32,32,32,219,219,177,176,32,219,219,177,176,32,32,219,219,219,219,219,219,219,219,177,176);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 32,32,32,32,32,32,32,219,219,177,176,219,219,177,176,32,32,32,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,32,32,219,219,177,176,32,32,32,32,32,32,32,32,32,32,32,219,219,177,176,32,219,219,177,176,32,219,219,177,176,32,32,32,32,219,219,177,176);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 32,32,32,32,32,32,32,32,219,219,219,219,177,176,32,32,32,32,32,219,219,219,219,219,219,177,176,32,32,32,219,219,219,219,219,219,177,176,32,32,32,219,219,219,219,219,219,177,176,32,32,32,32,32,32,32,32,32,32,32,32,219,219,219,219,219,219,177,176,32,32,219,219,177,176,32,32,32,32,219,219,177,176);
        printf("\n");
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,219,219,177,176);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,177,176,219,219,177,176);
        printf("\n");
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 32,219,219,219,219,219,219,219,177,176,32,219,219,219,219,219,219,219,219,177,176,32,32,219,219,219,219,219,219,177,176,32,32,219,219,177,176,32,32,219,219,177,176,32,219,219,219,219,219,219,219,219,177,176,32,219,219,177,176,32,32,219,219,177,176,32,32,219,219,219,219,219,177,176,32,32,219,219,177,176,32,32,32,32,219,219,219,219,177,176);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 219,219,177,176,32,32,32,32,32,32,32,219,219,177,176,32,32,32,32,32,32,32,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,32,32,32,32,32,32,32,219,219,219,219,177,176,219,219,177,176,32,219,219,177,176,32,219,219,177,176,32,219,219,177,176,32,32,32,219,219,177,176,219,219,177,176);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 32,219,219,219,219,219,219,177,176,32,32,219,219,219,219,219,219,177,176,32,32,32,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,32,32,219,219,177,176,32,219,219,219,219,219,219,177,176,32,32,32,219,219,177,219,219,177,219,219,177,176,32,219,219,177,176,32,32,32,32,32,32,219,219,177,176,32,32,219,219,177,176,32,32,219,219,177,176);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 32,32,32,32,32,32,219,219,177,176,32,219,219,177,176,32,32,32,32,32,32,32,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,32,32,32,32,32,32,32,219,219,177,176,219,219,219,219,177,176,32,219,219,177,176,32,32,32,32,32,32,219,219,177,176,32,32,219,219,219,219,219,219,219,219,177,176);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 32,32,32,32,32,32,219,219,177,176,32,219,219,177,176,32,32,32,32,32,32,32,219,219,177,219,219,177,219,219,177,176,32,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,32,32,32,32,32,32,32,219,219,177,176,32,219,219,219,177,176,32,219,219,177,176,32,219,219,177,176,32,219,219,177,176,32,219,219,177,176,32,32,32,32,219,219,177,176);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 32,219,219,219,219,219,219,177,176,32,32,219,219,219,219,219,219,219,219,177,176,32,32,219,219,219,219,219,219,177,176,32,32,32,219,219,219,219,219,219,177,176,32,32,219,219,219,219,219,219,219,219,177,176,32,219,219,177,176,32,32,219,219,177,176,32,32,219,219,219,219,219,177,176,32,32,219,219,177,176,32,219,219,177,176,32,32,32,32,219,219,177,176);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,177,176);

        printf("\n\n");

        printf("\t\t\t\tJorge Miguel - Luiz Ot%cvio - Pedro Theobaldo\n", 160);
        printf("\t\t\t\t  Programa%c%co Avan%cada - Jogos Digitais\n", 135, 198, 135);

        printf("\n\t\t\t\t\t\tJ - Jogar");
        printf("\n\t\t\t\t\t\tS - Sair");

        opc = getch();

        system("cls");

    }while((opc != 'j') && (opc != 's'));

    switch(opc)
    {
        case 's':
            exit(1);
            break;
        case 'j':
            jogo();
            break;
    }
}

void main()
{
    srand(time(NULL));

    tela_inicial();
}
