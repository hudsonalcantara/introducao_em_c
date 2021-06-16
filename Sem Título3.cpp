#include <stdio.h>

int main(){
	float dividendo;
	int divisor;
	printf("Digite dois numeros reais:\n");
	scanf("%f %f", &dividendo, &divisor);
	printf("A divisao do numero %.0f por %d e %.0f", dividendo, divisor, dividendo/divisor);
}
