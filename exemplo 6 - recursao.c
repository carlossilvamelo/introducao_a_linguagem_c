#include <stdio.h>
#include <stdlib.h>

/// esta função recursiva inverte a ordem dos caracteres de entrada.
void inverter(){
 char valor;
       
        scanf("%c", &valor);
        
        if(valor != '\n'){
            inverter();
        }
        
        printf("%c", valor);
}

int main(){

    inverter();

    return 0;
}

