#include <stdio.h>

int main() {
    int opcao;
    float temperatura, resultado;
    
    printf("=== CONVERSOR DE TEMPERATURA ===\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Fahrenheit para Kelvin\n");
    printf("5 - Kelvin para Celsius\n");
    printf("6 - Kelvin para Fahrenheit\n");
    
    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);
    
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);
    
    switch (opcao) {
        case 1: 
            resultado = (temperatura *9.0/5.0) + 32.0;
            printf("Resultado: %.2f Fahrenheit\n", resultado);
            break;
            
        case 2:
            resultado = temperatura + 273.15;
            printf("Resultado: %.2f Kelvin\n", resultado);
            break;
            
        case 3: 
            resultado = (temperatura - 32.0) * 5.0 / 9.0;
            printf("Resultado: %.2f Celsius\n", resultado);
            break;
        
        case 4: 
            resultado = (temperatura - 32.0) * 5.0 / 9.0 + 273.15;
            printf("Resultado: %.2f Kelvin\n", resultado);
            break;
            
        case 5: 
            resultado = temperatura - 273.15;
            printf("Resultado: %.2f Celsius\n", resultado);
            break;
            
        case 6: 
            resultado = (temperatura - 273.15) * 9.0 / 5.0 + 32.0;
            printf("Resultado: %.2f Fahrenheit\n", resultado);
            break;
            
        default: 
            printf ("Opcao Invalida!\n");
    }
    return 0;
}