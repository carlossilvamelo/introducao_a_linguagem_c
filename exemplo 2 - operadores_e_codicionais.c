#include <stdio.h>
#include <stdlib.h>

int main(){
    /// criando variaveis
    int A,B,C,aux;


        printf("Digite 3 numeros inteiros:\n");
        scanf(" %d",&A);
        scanf(" %d",&B);
        scanf(" %d",&C);


        /* para colocar em ordem crescente, faremos as comparações e
        trocaremos os valores de forma que no final tenhamos os valores
        na ordem crescente das letras A,B e C!
        */
            if( (A <= B) && (A <= C) ){
                    /// A é o menor!

                    if( B <= C){
                        /// nesse caso os numeros ja estão em ordem e nada sem faz.
                    }else{
                        /// B > C, logo, trocamos os dois valores.
                        aux = C;
                        C = B;
                        B = aux;

                    }
            }

            if( (B <= A) && (B <= C) ){
                ///B é o menor!  então, trocamos com o A para que A contenha o menor
                aux = A;
                A = B;
                B = aux;

                    if( B <= C){
                            /// nesse caso os numeros ja estão em ordem e nada sem faz.
                        }else{
                            /// B > C, logo, trocamos os dois valores.
                            aux = C;
                            C = B;
                            B = aux;

                        }
            }

            if( (C <= A) && (C <= B) ){
                ///C é o menor! então, trocamos com o A para que A contenha o menor
                aux = A;
                A = C;
                C = aux;

                         if( B <= C){
                            /// nesse caso os numeros ja estão em ordem e nada sem faz.
                        }else{
                            /// B > C, logo, trocamos os dois valores.
                            aux = C;
                            C = B;
                            B = aux;
                        }
            }

        ///imprimindo os valores em ordem crescente!
        printf("%d %d %d \n",A,B,C);

    return 0;
}
