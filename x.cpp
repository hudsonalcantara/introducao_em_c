#include <stdio.h>

int main(){
	char opcao;
	
	printf("Entre com 1- para adicionar e 2- para excluir:\n");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1: {
			printf("\nNumero 1\n");
			break;
		}
		
		case 2: {
			printf("\nNumero 2\n");
			break;
		}
		
		default: printf("\nOpcao invalida.\n");
	}	
	
	printf("Final do programa.");

}

