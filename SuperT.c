#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "SuperT.h"
 
int main() {
   
  
    printf(" ---------------------------------------------------------------------------------- \n");
    printf("| Vamos Jogar um jogo? O nome dele é Super Trunfo, digite 1 para sim e 2 para não  |\n");
    printf(" ---------------------------------------------------------------------------------- \n");
    printf("|                                                                                  |\n");
    printf("|                             1 - Sim             2 - Não                          |\n");
    printf("|                                                                                  |\n");
    printf(" ---------------------------------------------------------------------------------- \n");
    
      int escolha1;
      scanf("%d", &escolha1);

    switch (escolha1) {
             case 1:
                printf("Vamos começar !\n");
                supertrunfo();
                break;              
             case 2:
                printf("Até a próxima!\n");
                break;
             default:
                printf("Opção inválida\n");
                break;  
            }
           
            system("pause"); // Pausa a execução até o usuário pressionar uma tecla
            return 0;

}
