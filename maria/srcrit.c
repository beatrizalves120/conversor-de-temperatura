#include <stdio.h>


float celsiusParaFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}


float celsiusParaKelvin(float c) {
    return c + 273.15;
}


float fahrenheitParaCelsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}


float kelvinParaCelsius(float k) {
    return k - 273.15;
}


int main() 
    float temperatura, celsius;
    char escala;


    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);
   
    printf("Informe a escala de origem (C, F, K): ");
    scanf(" %c", &escala);


    if (escala == 'C' || escala == 'c') {
        celsius = temperatura;
    } else if (escala == 'F' || escala == 'f') {
        celsius = fahrenheitParaCelsius(temperatura);
    } else if (escala == 'K' || escala == 'k') {
        celsius = kelvinParaCelsius(temperatura);
    } else {
        printf("Escala inválida.\n");
        return 1;
    }


    printf("\nConversões:\n");
    printf("Celsius: %.2f °C\n", celsius);
    printf("Fahrenheit: %.2f °F\n", celsiusParaFahrenheit(celsius));
    printf("Kelvin: %.2f K\n", celsiusParaKelvin(celsius));


    return 0;
