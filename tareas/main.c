#include<stdio.h>

void sumar(){
    float n1,n2;
    printf("Ingresa el primer numero: ");
    scanf("%f", &n1);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &n2);
    printf("La suma es: %.2f\n", n1+n2);
}

void restar(){
    float n1,n2;
    printf("Ingresa el primer numero: ");
    scanf("%f", &n1);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &n2);
    printf("La resta es: %.2f\n", n1-n2);
}
void multiplicar(){
    float n1,n2;
    printf("Ingresa el primer numero: ");
    scanf("%f", &n1);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &n2);
    printf("La multiplicacion es: %.2f\n", n1*n2);
}
void dividir(){
    float n1,n2;
    printf("Ingresa el primer numero: ");
    scanf("%f", &n1);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &n2);
    if(n2==0){
        printf("No se puede dividir entre 0\n");
        return;
    }
    printf("La division es: %.2f\n", n1/n2);
}
int main(){
    char op;
    while(op!='5'){
        printf("-----------------Calculadora Basica en C-----------------\n");
        printf("1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Salir\n");
        printf("Elija una operacion: ");
        scanf("%c", &op);
        switch(op){
            case '1':
                sumar();
                break;
            case '2':
                restar();
                break;
            case '3':
                multiplicar();
                break;
            case '4':
                dividir();
                break;
            case '5':
                printf("Saliendo...\n");
                break;
            default:
                printf("Operacion no encontrada\n");
                break;
        }
        printf("Presione una tecla para continuar...");
        getchar();
    }
    return 0;
}