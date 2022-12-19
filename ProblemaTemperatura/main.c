#include <stdlib.h>
#include <stdio.h>

// fazer o problema temperatura base adicionando que pode se nos tipos K, C, F e tambem se e do corpo humano ou ambiente
// termina
// fazer aceita caractere minusculo e maiusculo

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
    char metodo;
    char opcao;
    double c, celsius, k, kelvin, f, fahrenheit;
    
    
    printf("Se deseja sabe a condição do corpo humano pelo temperatura digite h,\nSe quiser sabe do ambiente digite ambiente: ");
    scanf("%c", &opcao);
    if(opcao == 'h'){
        printf("Qual e o metodo de medição que esta sendo utilizado (pode ser C para celsius, F para fahenrait ou K para kleter): ");
        clearInput();
        scanf("%c", &metodo);
        if (metodo == 'F'){
            printf("Quantos Graus Fahrenheit está: ");
            scanf("%lf", &f);
            celsius = (f - 32) * 5/9;
            kelvin = (f - 32) * 5/9 + 273.15;
            if (c > 37.5 && 40 < c){
                printf("Temperatura corporal elevada de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", f, kelvin, celsius);
            } else if (c < 36.5 && c > 34.5){
                printf("Temperatura corporal baixa de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", f, kelvin, celsius);
            } else if(c > 55 || c < 30){
                printf("Infelizmente vou ta ferrado com temperatura registada de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", f, kelvin, celsius);
            }
        } else if (metodo == 'C'){
            printf("Quantos Graus Celsius está: ");
            scanf("%lf", &c);
            fahrenheit = c * 9/5 + 32;
            kelvin = c + 273.15;
            if (c > 37.5 && 40 < c){
                printf("Temperatura corporal elevada de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            } else if (c < 36.5 && c > 34.5){
                printf("Temperatura corporal baixa de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            } else if(c > 55 || c < 30){
                printf("Infelizmente vou ta ferrado com temperatura registada de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            }
        } else if (metodo == 'K'){
            printf("Quantos Graus Kelvin está: ");
            scanf("%lf", &k);
            fahrenheit = (k - 273.15) * 9/5 + 32;
            celsius = k - 273.15;
            if (c > 37.5 && 40 < c){
                printf("Temperatura corporal elevada de %.2lf° Kelvin, %.2lf° Fahrenheit e %.2lf° Celsius", k, fahrenheit, celsius);
            } else if (c < 36.5 && c > 34.5){
                printf("Temperatura corporal baixa de %.2lf° Kelvin, %.2lf° Fahrenheit e %.2lf° Celsius", k, fahrenheit, celsius);
            } else if(c > 55 || c < 30){
                printf("Infelizmente vou ta ferrado com temperatura registada de %.2lf° Kelvin, %.2lf° Fahrenheit e %.2lf° Celsius", k, fahrenheit, celsius);
            }
        }
    } else if(opcao == "ambiente"){
        printf("Qual e o metodo de medição que esta sendo utilizado (pode ser C para celsius, F para fahenrait ou K para kleter): ");
        clearInput();
        scanf("%c", &metodo);
        if (metodo == 'F'){
            printf("Quantos Graus Fahrenheit está: ");
            scanf("%lf", &f);
            celsius = (f - 32) * 5/9;
            kelvin = (f - 32) * 5/9 + 273.15;
        } else if (metodo == 'C'){
            printf("Quantos Graus Celsius está: ");
            scanf("%lf", &c);
            fahrenheit = c * 9/5 + 32;
            kelvin = c + 273.15;
        } else if (metodo == 'K'){
            printf("Quantos Graus Kelvin está: ");
            scanf("%lf", &k);
            fahrenheit = (k - 273.15) * 9/5 + 32;
            celsius = k - 273.15;
        }
    }
    
    return 0;
}
