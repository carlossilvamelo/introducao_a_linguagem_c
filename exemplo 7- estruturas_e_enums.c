#include <stdio.h>
#include <stdlib.h>

enum{
    novoCad=1, mostrarCad = 2, sair = 3
};


/// tipo estruturado para da castro de pessoas
typedef struct cadastro{
        char nome[30];
        int cpf;
        int idade;

}cadastro;

/// função mostra todos os cadastros
void mostrarCadastros(int id, cadastro cad[10]){
int i;

        for(i=0 ; i <= id ; i++ ){
            printf("    CADASTRO %d\n",i+1);
            printf("Nome: %s\n", cad[i].nome);
            printf("CPF: %d\n", cad[i].cpf);
            printf("Idade: %d\n\n", cad[i].idade);

        }
    printf("\n\n\n");
}

/// função adiciona novo cadastro
void cadastrar( int id, cadastro cad[10]){

            printf("Digite seu nome:\n");
            scanf(" %s", cad[id].nome ); /// é uma string, por isso no precisa do &!
            printf("Digite seu cpf:\n");
            scanf(" %d", &cad[id].cpf );
            printf("Digite sua idade:\n");
            scanf(" %d", &cad[id].idade );
}


int main(){

    cadastro cad[10]; /// vetor para o cadastro de 10 pessoas
    int idCadastro = 0;
    int opcao=0,i;


    while((opcao != sair)){

            printf(" Para novo cadastro digite 1 \n");
            printf(" Para ver cadastrados digite 2 \n");
            printf(" Para SAIR digite 3 \n");
            scanf(" %d", &opcao);

                if(opcao != sair){

                            if(opcao == novoCad){

                                    if(idCadastro <= 10){
                                        /// pode cadastrar
                                        cadastrar(idCadastro, cad);
                                        idCadastro++;

                                    }else{
                                        printf("\n  NÃO TEMOS MAIS VAGAS!\n");
                                        opcao = sair;
                                    }



                            }

                            if(opcao == mostrarCad)
                                if(idCadastro > 0)
                                    mostrarCadastros(idCadastro-1, cad);
                                else
                                    mostrarCadastros(idCadastro-1, cad);

                }

    }//while

printf("\n\n   Obrigado por visualizar nosso cadastro!\n\n");


    return 0;
}

