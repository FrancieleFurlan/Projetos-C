#include <stdio.h>
#include <stdlib.h>

float converterCelsiusParaFahrenheit(float c);

int main(int argc, char *argv[]) {
	
	float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    
    fahrenheit = converterCelsiusParaFahrenheit(celsius);

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);
	
	return 0;
}
float converterCelsiusParaFahrenheit(float c) {
    float f;
    f = c * (9.0 / 5.0) + 32.0;
    return f;
}
