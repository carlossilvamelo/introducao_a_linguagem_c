#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int vet[5];
    int matriz[2][2] = { {7,8},{3,6}};
    char palavra1[30];
    char palavra2[30];
    int i,j,dif;

    ///manipulando um vetor pelo indice
    // atribuir um valor a cada posição do vetor

    for(i=0; i < 5 ;i++)
        vet[i] = i + 5;


   printf("IMPRIMINDO A MATRIZ!\n");
    for(i=0; i < 2 ;i++){

        for(j=0; j < 2 ;j++){
             printf("%d ", matriz[i][j]);
        }
         printf("\n");
    }

	///usando a função gets para pegar nome
	 printf("\nDigite seu primeiro nome:\n");
	    gets(palavra1);
	     printf("Digite seu ultimo nome:\n");
		gets(palavra2);

	    /// usando a função strcmp para comparar e strcat para concatenar, ambas de string.h
	    if(strcmp(palavra1, palavra2) != 0){
		    strcat(palavra1, " ");
		    strcat(palavra1, palavra2);
		    printf("\nSeu nome é %s, e seu primeiro nome é diferente do ultimo!\n", palavra1);

		}else{
		        strcat(palavra1, " ");
		        strcat(palavra1, palavra2);
		        printf("\nSeu nome é %s, e seu primeiro nome é igual ao ultimo!\n", palavra1);
		}


    return 0;
}

