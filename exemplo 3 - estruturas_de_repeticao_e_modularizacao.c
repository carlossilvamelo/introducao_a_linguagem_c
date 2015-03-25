#include <stdio.h>
#include <stdlib.h>

void repete_com_for(int repeticoes){
    int i;

    for(i=1; i <= repeticoes ; i++)
        printf("Estrutura de repetição FOR %d\n",i);

printf("\n");
}

void repete_com_while(int repeticoes){
    int i=1;

    while(i <= repeticoes)
        printf("Estrutura de repetição WHILE %d\n",i++);

printf("\n");
}

void repete_com_doWhile(int repeticoes){
    int i=1;

    do{
        printf("Estrutura de repetição DOWHILE %d\n",i++);
    }while( i <= repeticoes);

printf("\n");
}



int main(){


        repete_com_for(2);
        repete_com_while(3);
        repete_com_doWhile(5);


    return 0;
}

