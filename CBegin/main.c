#include <stdio.h>
#include <stdlib.h>

void clearInput() {
     char c;
     while ((c = getchar()) != '\n' && c != EOF) {}
}
void readText(char *buffer, int length) {
     fgets(buffer, length, stdin);
     strtok(buffer, "\n");
}

int main()
{
    /*
       int - %d || %i (32 bits),
       long int - %li (32 bits),
       long long int - %lli (64 bits),
       float - %f (precisão simples),
       double - %lf  (precisão dupla),
       char - %c (caractere),
       char[] - %s (string),
       scanf = input, coloca o placeholder respectivo a o tipo de variavel digitada,
       fgets,
    */

    int Int;
    double Double;
    char Char;
    char String[50];

    printf("Escreva um texto: ");
    readText(String, 50);

    printf("Escreva um nunero: ");
    scanf("%i", &Int);

    printf("Escreva um numero flutuante: ");
    scanf("%lf", &Double);

    printf("Escreva um caracte: ");
    clearInput();
    scanf("%c", &Char);


    printf("%i\n", Int);
    printf("%.2lf\n", Double);
    printf("%c\n", Char);
    printf("%s\n", String);

    int w, z;
    double resultado;
    w = 5;
    z = 2;
    resultado = (double) w / z;
    printf("O Resultado da divisao e: %.2lf\n", resultado);

 return 0;
}
