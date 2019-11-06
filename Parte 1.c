#include<stdio.h>

//NOMBRE: Colon Guevara, Amado Salvador
//CARNET: CG18046

int conversion(int nBinario){
	if(nBinario<2){
		return nBinario;
	}else{
		return (2*conversion(nBinario/10) + nBinario%10);
	}
}

int main(){
	int nBinario;
	printf("Ingrese un numero en binario: ");
	scanf("%i", &nBinario);
	printf("Convertido a decimal es: %i",  conversion(nBinario));
}
