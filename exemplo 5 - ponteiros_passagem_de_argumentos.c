#include <stdio.h>
#include <stdlib.h>

char* Maiusculo(char* ponteiro){
int i;
char *novo = ponteiro;

            for(i=0; *(novo+i) != '\0' ;i++){
                *(novo+i) -= 32;
            }

return novo;
}


int main(){

    char palavra[30];
    char *palavraMaiucula;


        printf("Escreva uma palavra com as letras menusculas!\n");
        scanf(" %s", palavra);

            printf("%s  ---->  ",palavra);
            printf("%s",Maiusculo(palavra));




    return 0;
}
