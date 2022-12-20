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
    
    
    printf("Se deseja sabe a condição do corpo humano pelo temperatura digite h,\nSe quiser sabe do ambiente digite a : ");
    scanf("%c", &opcao);
    if(opcao == 'h'){
        printf("Qual e o metodo de medição que esta sendo utilizado (pode ser C para celsius, F para fahrenheit ou K para kelvin): ");
        clearInput();
        scanf("%c", &metodo);
        if (metodo == 'C'){
            printf("Quantos Graus Celsius está: ");
            scanf("%lf", &c);
            fahrenheit = c * 9/5 + 32;
            kelvin = c + 273.15;
            if (celsius > 37.5 && 40 <= celsius){
                printf("Temperatura corporal elevada de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            } else if (celsius < 36.5 && celsius > 34.5){
                printf("Temperatura corporal baixa de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            } else if(celsius >= 36.5 && celsius <= 37.5){
                printf("Temperatura corporal normal de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            } else if(celsius > 55 || celsius < 30){
                printf("Infelizmente voce ta ferrado com temperatura registada de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            } else {
                printf("Temperatura não registada no sistema: %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            }
        }else if (metodo == 'F'){
            printf("Quantos Graus Fahrenheit está: ");
            scanf("%lf", &f);
            celsius = (f - 32) * 5/9;
            kelvin = (f - 32) * 5/9 + 273.15;
            if (celsius > 37.5 && 40 <= celsius){
                printf("Temperatura corporal elevada de %.2lf° Fahrenheit, %.2lf° Celsius e %.2lf° Kelvin", f, celsius, kelvin);
            } else if (celsius < 36.5 && celsius > 34.5){
                printf("Temperatura corporal baixa de %.2lf° Fahrenheit, %.2lf° Celsius e %.2lf° Kelvin", f, celsius, kelvin);
            } else if(celsius >= 36.5 && celsius <= 37.5){
                printf("Temperatura corporal normal de %.2lf° Fahrenheit, %.2lf° Celsius e %.2lf° Kelvin", f, celsius, kelvin);
            } else if(celsius > 55 || celsius < 30){
                printf("Infelizmente voce ta ferrado com temperatura registada de %.2lf° Fahrenheit, %.2lf° Celsius e %.2lf° Kelvin", f, celsius, kelvin);
            } else {
                printf("Temperatura não registada no sistema: %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", celsius, f, kelvin);
            }
        } else if (metodo == 'K'){
            printf("Quantos Graus Kelvin está: ");
            scanf("%lf", &k);
            fahrenheit = (k - 273.15) * 9/5 + 32;
            celsius = k - 273.15;
            if (celsius > 37.5 && 40 <= celsius){
                printf("Temperatura corporal elevada de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", k, celsius, fahrenheit);
            } else if (celsius < 36.5 && celsius > 34.5){
                printf("Temperatura corporal baixa de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", k, celsius, fahrenheit);
            } else if(celsius >= 36.5 && celsius <= 37.5){
                printf("Temperatura corporal normal de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", k, celsius, fahrenheit);
            } else if(celsius > 55 || celsius < 30){
                printf("Infelizmente voce ta ferrado com temperatura registada de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", k, celsius, fahrenheit);
            } else {
                printf("Temperatura não registada no sistema: %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", celsius, fahrenheit, k);
            }
        }
    } else if(opcao == 'a'){
        printf("Qual e o metodo de medição que esta sendo utilizado (pode ser C para celsius, F para fahenrait ou K para kleter): ");
        clearInput();
        scanf("%c", &metodo);
        if (metodo == 'C'){
            printf("Quantos Graus Celsius está: ");
            scanf("%lf", &c);
            fahrenheit = c * 9/5 + 32;
            kelvin = c + 273.15;
            if (c > 27 && 29 < c){
                printf("Temperatura ambiente de clima Equatorial de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            } else if (c >= 24 && c <= 25){
                printf("Temperatura ambiente de clima Tropical de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            } else if(c > 0 && c < 20){
                printf("Temperatura ambiente de clima Temperado de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            } else if (c > 16 && 30 <= c){
                printf("Temperatura ambiente de clima Subtropical de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            } else if(c >= 22 && 24 <= c){
                printf("Temperatura ambiente de clima Mediterrâneo de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            } else if(c >= -10 && 4 <= c){
                printf("Temperatura ambiente de clima Frio de Montanha de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            } else if(c >= -40 && 10 <= c ){
                printf("Temperatura ambiente de clima Polar de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            } else if(c > 35 && 75 < c){
                printf("Temperatura ambiente de clima Desértico de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            } else if(c >= 27 && 34 <= c){
                printf("Temperatura ambiente de clima Semiárido de %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            } else {
                printf("Temperatura não registada no sistema: %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", c, fahrenheit, kelvin);
            }
        } else if (metodo == 'F'){
            printf("Quantos Graus Fahrenheit está: ");
            scanf("%lf", &f);
            celsius = (f - 32) * 5/9;
            kelvin = (f - 32) * 5/9 + 273.15;
            if (celsius > 27 && 29 < celsius){
                printf("Temperatura ambiente de clima Equatorial de %.2lf° Fahrenheit, %.2lf° Celsius e %.2lf° Klevin", f, celsius, kelvin);
            } else if (celsius >= 24 && celsius <= 25){
                printf("Temperatura ambiente de clima Tropical de %.2lf° Fahrenheit, %.2lf° Celsius e %.2lf° Klevin", f, celsius, kelvin);
            } else if(celsius > 0 && celsius < 20){
                printf("Temperatura ambiente de clima Temperado de %.2lf° Fahrenheit, %.2lf° Celsius e %.2lf° Klevin", f, celsius, kelvin);
            } else if (celsius > 16 && 30 <= celsius){
                printf("Temperatura ambiente de clima Subtropical de %.2lf° Fahrenheit, %.2lf° Celsius e %.2lf° Klevin", f, celsius, kelvin);
            } else if(celsius >= 22 && 24 <= celsius){
                printf("Temperatura ambiente de clima Mediterrâneo de %.2lf° Fahrenheit, %.2lf° Celsius e %.2lf° Klevin", f, celsius, kelvin);
            } else if(celsius >= -10 && 4 <= celsius){
                printf("Temperatura ambiente de clima Frio de Montanha de %.2lf° Fahrenheit, %.2lf° Celsius e %.2lf° Klevin", f, celsius, kelvin);
            } else if(celsius >= -40 && 10 <= celsius){
                printf("Temperatura ambiente de clima Polar de %.2lf° Fahrenheit, %.2lf° Celsius e %.2lf° Klevin", f, celsius, kelvin);
            } else if(celsius > 35 && 75 < celsius){
                printf("Temperatura ambiente de clima Desértico de %.2lf° Fahrenheit, %.2lf° Celsius e %.2lf° Klevin", f, celsius, kelvin);
            } else if(celsius >= 27 && 34 <= celsius){
                printf("Temperatura ambiente de clima Semiárido de %.2lf° Fahrenheit, %.2lf° Celsius e %.2lf° Klevin", f, celsius, kelvin);
            } else {
                printf("Temperatura não registada no sistema: %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", celsius, f, kelvin);
            }
        } else if (metodo == 'K'){
            printf("Quantos Graus Kelvin está: ");
            scanf("%lf", &k);
            fahrenheit = (k - 273.15) * 9/5 + 32;
            celsius = k - 273.15;
            if (celsius > 27 && 29 < celsius){
                printf("Temperatura ambiente de clima Equatorial de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", k, celsius, fahrenheit);
            } else if (celsius >= 24 && celsius <= 25){
                printf("Temperatura ambiente de clima Tropical de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", k, celsius, fahrenheit);
            } else if(celsius > 0 && celsius < 20){
                printf("Temperatura ambiente de clima Temperado de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", k, celsius, fahrenheit);
            } else if (celsius > 16 && 30 <= celsius){
                printf("Temperatura ambiente de clima Subtropical de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", k, celsius, fahrenheit);
            } else if(celsius >= 22 && 24 <= celsius){
                printf("Temperatura ambiente de clima Mediterrâneo de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", k, celsius, fahrenheit);
            } else if(celsius >= -10 && 4 <= celsius){
                printf("Temperatura ambiente de clima Frio de Montanha de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", k, celsius, fahrenheit);
            } else if(celsius >= -40 && 10 <= celsius){
                printf("Temperatura ambiente de clima Polar de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", k, celsius, fahrenheit);
            } else if(celsius > 35 && 75 < celsius){
                printf("Temperatura ambiente de clima Desértico de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", k, celsius, fahrenheit);
            } else if(celsius >= 27 && 34 <= celsius){
                printf("Temperatura ambiente de clima Semiárido de %.2lf° Kelvin, %.2lf° Celsius e %.2lf° Fahrenheit", k, celsius, fahrenheit);
            } else {
                printf("Temperatura não registada no sistema: %.2lf° Celsius, %.2lf° Fahrenheit e %.2lf° Kelvin", celsius, fahrenheit, k);
            }
        }
    }
    
    return 0;
}
