#include <stdio.h>

int main(){
	char ch1, ch2;
	printf("Entre com duas letras:\n");
	scanf("%c", &ch1);
	fflush(stdin);
	scanf("%c", &ch2);
	printf("As letras inseridas foram %c e %c.\n", ch1, ch2);
}
