#include <stdio.h>

int main (){

    int torre = 0;
    int bispo = 0;
    int rainha = 0;
    int cavalo = 0;


    while (rainha < 8){
        printf("rainha esquerda\n");
    rainha ++;
    }


    for (torre; torre < 5; torre++)
    {
        printf("torre cima direita\n");
    }

    
    
    do
    {
        printf("bispo cima esquerda\n");
        printf("bispo cima direita\n");
        bispo ++;
    } while (bispo < 5);

    
    
    
    for (cavalo; cavalo < 2; cavalo++){
        printf("cavalo cima\n");

        for (cavalo; cavalo < 1; cavalo++)
        {
            printf("cavalo cima\n");
        }
            printf("cavalo cima direita\n");
    }
    
    
    return 0;
}

    


    
