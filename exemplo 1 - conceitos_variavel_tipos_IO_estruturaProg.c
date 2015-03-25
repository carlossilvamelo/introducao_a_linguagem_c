#include <stdio.h>
#include <stdlib.h>

int main(){
  /// criando variaveis
  int variavelTipoInteira;
  float variavelTipoPontoFlutuante;
  char variavelTipoCaractere;


        ///atribuindo valores as variaveis
        variavelTipoInteira = 15;
        variavelTipoCaractere = 'A'; // aspas simples para indicar caractere
        variavelTipoPontoFlutuante = 10.75;

        ///usando scanf  para pedir valor da entrada padrão (teclado) e atribuir a variavel inteira
        printf("Digite um numero inteiro:\n");
        scanf(" %d", &variavelTipoInteira);

        ///imprimindo as 3 variaveis na saida padrão (tela)
        printf("Inteiro: %d \n", variavelTipoInteira); /// "\n" significa quebra de linha
        printf("Caractere: %c \n", variavelTipoCaractere);
        printf("ponto flutuante: %f \n", variavelTipoPontoFlutuante);



    return 0;
}

