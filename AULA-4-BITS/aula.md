Existe o conceito de bits e ele é muito importante no C/C++ e existe uma tabela que define, eles de acordco com o processamento.

8bit == 1Byte or B
1024B == 1KiloByte or Kb
1024Kb == 1MegaByte or MB
1024Mb == 1GigaByte or GB
1024Gb == 1TeraByte or TB


// %s - string
// %c - char
// %d,%i - inteiro
// %f - float
// %lf - double
// %ld - long int

// Operações aritméticas básicas
// * 
// / 
// +
// -

// ++    incrementa   i++ é a mesma coisa que i = i + 1;

// %  resto da divisão.

// (2+2)/2 = 2
// 2+((2/2)*7) = 3

// ==   igual
// >=   maior ou igual
// >   maior
// <=   menor ou igual
// <   menor
// !=   diferente

Operadores relacionais

&&   - verdade se todas as comparações são verdadeiras
||     - verdade se alguma comparação é verdadeira

---------- ATIVIDADES ----------
---------- EXERCICIO 1 ----------

#include <stdio.h>

int main(){

    int num1, num2;
    float resultado_racional;

    printf("Insira um numero: ");
    scanf("%d", &num1);

    printf("Insira outro numero: ");
    scanf("%d", &num2);

    if ((num1%num2) == 0) {
        printf("\n %d e %d sao multiplos \n", num1, num2);
    } else {
        printf("\n %d e %d nao sao multiplos \n", num1, num2);
    }   

    printf("Fim \n");

    return 0;
}

---------- EXERCICIO 2 ----------
#include <stdio.h>

int main(){

    int num1, num2, resto;
    int tentativas;

    for (tentativas = 0; resto != 0; tentativas++) 
    {
        printf("Insira um numero: ");
        scanf("%d", &num1);

        printf("Insira outro numero: ");
        scanf("%d", &num2);

        resto = num1%num2;
    }
 
    printf("Quantidade de tentativas: %d \n", tentativas);

    return 0;
}