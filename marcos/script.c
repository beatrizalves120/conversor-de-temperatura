 #include <stdio.h>


float converterParaCelsius(float valor, char escala);
void exibirConversoes(float celsius);


int main() {
    float temperatura;
    char escala;


    printf("Informe a temperatura: ");
    scanf("%f", &temperatura);


    printf("Digite a escala de origem (C, F, K): ");
    scanf(" %c", &escala);


    float celsius = converterParaCelsius(temperatura, escala);


    if (celsius == -9999) {
        printf("Escala inválida!\n");
        return 1;
    }


    exibirConversoes(celsius);
    return 0;
}


float converterParaCelsius(float valor, char escala) {
    switch (escala) {
        case 'C':
        case 'c':
            return valor;
        case 'F':
        case 'f':
            return (valor - 32.0) * 5.0 / 9.0;
        case 'K':
        case 'k':
            return valor - 273.15;
        default:
            return -9999; // Valor inválido
    }
}


void exibirConversoes(float celsius) {
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    float kelvin = celsius + 273.15;


    printf("\nResultado das conversões:\n");
    printf("Celsius: %.2f °C\n", celsius);
    printf("Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Kelvin: %.2f K\n", kelvin);
}
