#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



int var_v_Joao = 0, 
            var_v_Maria = 0, 
            var_v_Ze = 0, 
            var_v_Nulo = 0;

        int prefeito;
        int var_p_Zureta = 0, 
            var_p_Gomes = 0,
            var_p_Nulo = 0; 

int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    int vereador;

    printf  ("************MENU PRINCIPAL *************\n");
    printf  ("[ 1 ] - VOTO *\n");
    printf  ("[ 2 ] - CONTAGEM DOS VOTOS *\n");
    printf  ("[ 3 ] - SAIR *\n");
    printf  ("****************************************\n");
    
    printf  ("Digite sua alternativa--->");
    scanf ("%i", &opcao);
    fflush(stdin);

    // Usuário escolhe a opção
    switch (opcao)
    {
    case 1/* constant-expression */:
        system("cls");

                /* code */
                printf("************MENU DE VOTO PARA VEREADOR *************\n\n\n");
                printf("[111] - Vereador Joao do Frete\n");
                printf("[222] - Vereador Maria da Pamonha\n");
                printf("[333] - Vereador Ze da Farmacia\n");
                printf("[444] - Voto Nulo para Vereador\n");
                printf  ("****************************************\n");
            
                printf  ("Escolha seu Vereador --->");
                scanf ("%i", &vereador);
                fflush(stdin);
            switch (vereador)
                {
                    case 111 /* constant-expression */:
                        /* code */
                        printf("Voto confirmado para - [111] - Vereador Joao do Frete\n");
                        var_v_Joao ++;
                        break;
                    case 222 /* constant-expression */:
                        /* code */
                        printf("Voto confirmado para - [222] - Vereador Maria da Pamonha\n");
                        var_v_Maria ++;
                        break;
                    case 333 /* constant-expression */:
                        /* code */
                        printf("Voto confirmado para - [333] - Vereador Ze da Farmacia\n");
                        var_v_Ze ++;
                        break;
                    case 444 /* constant-expression */:
                        /* code */
                        printf("Voto confirmado para - [444] - VOTO NULO PARA VEREADOR\n");
                        var_v_Nulo ++;
                        break;            
                    
                    default:
                        printf("Voto Inválido para Vereador\n");

                        break;
                }

                    system("PAUSE");


                    system("cls");
            

                    /* code */
                    printf("************MENU DE VOTO PARA PREFEITO *************\n\n\n");
                    printf("[11] - Prefeito Dr. Zureta\n");
                    printf("[22] - Prefeito Senhor Gomes\n");
                    printf("[44] - Voto Nulo para Prefeito\n");
                    printf("****************************************\n");
                
                    printf  ("Escolha seu Prefeito --->");
                    scanf ("%i", &prefeito);
                    fflush(stdin); 

                    switch (prefeito)
                {
                    case 11 /* constant-expression */:
                    /* code */
                    printf("Voto confirmado para - [11] - Prefeito Dr. Zureta\n");
                    var_p_Zureta++;
                    break;
                    case 22 /* constant-expression */:
                    /* code */
                    printf("Voto confirmado para - [22] - Prefeito Senhor Gomes\n");
                    var_p_Gomes++;
                    break;
                
                
                    default:
                    printf("Voto Inválido para - Prefeito \n");

                    break;
                }

                printf("\n\n");
                printf("*************************************\n");
                printf("VOTO FINALIZADO!\n");
                printf("Voltando para MENU PRINCIPAL!\n");
                system("pause");
                main();
                
        break;
    case 2:
                system("cls");

                /* code */
                
                printf("************VEREADORES VOTADOS *************\n\n");
                printf("[111] - Vereador Joao do Frete    : %d . Votos Válidos\n", var_v_Joao);
                printf("[222] - Vereador Maria da Pamonha : %d . Votos Válidos\n", var_v_Maria);
                printf("[333] - Vereador Ze da Farmacia   : %d . Votos Válidos\n", var_v_Ze);
                printf("[444] - Votos Nulos               : %d . Votos Nulos\n", var_v_Nulo);

                printf("\n");

                printf("************PREFEITOS VOTADOS *************\n\n");
                printf("[11] - Prefeito Dr. Zureta        : %d . Votos Válidos\n", var_p_Gomes);
                printf("[22] - Prefeito Senhor Gomes      : %d . Votos Válidos\n", var_p_Zureta);
                printf("[444] - Votos Nulos               : %d . Votos Nulos\n", var_p_Nulo);
                  

                system("pause");
                main();
 
        break;
    case 3:
                system("cls");

                exit;
 
        break;        
    default:
        break;
    }
}