#include<stdio.h>

//NOMBRE: Colon Guevara, Amado Salvador
//CARNET: CG18046

void cambio(int *a, int *b){ 
	*a = *a + *b; 
	*b = *a - *b; 
	*a = *a - *b; 
} 

int main(){
	int a, b; 
	printf("Ingrese el primer valor:"); 
	scanf("%i",&a); 
	printf("Ingrese el segundo valor"); 
	scanf("%i",&b); 
    
	cambio(&a, &b); 
    printf("a ahora es: %i\n", a); 
    printf("b ahora es: %i\n", b); 
    return 0; 
}
