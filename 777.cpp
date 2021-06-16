#include <stdio.h>

int main(){
	int cadastrado, ativo, logado;
	char opcao;
	
	cadastrado = ativo = logado = 0;
	
	printf("Deseja cadastrar sua conta? S/N \n");
	scanf(" %c", &opcao);
	
	if(opcao == 'S'){
		cadastrado = 1;
		printf("\nConta cadastrada.\n");
	} else {
		printf("\nConta nao cadastrada.\n");
	}
	
	printf("Deseja ativar sua conta? S/N \n");
	scanf(" %c", &opcao);
	
	if(opcao == 'S'){
		ativo = 1;
		printf("\nConta ativada.\n");
	} else {
		printf("\nConta nao ativada.\n");
	}
	
	printf("Deseja logar sua conta? S/N \n");
	scanf(" %c", &opcao);
	
	if(opcao == 'S'){
		logado = 1;
		printf("\nConta logada.\n");
	} else {
		printf("\nConta nao logada.\n");
	}
	
	if((cadastrado == 1) && (ativo == 1) && (logado == 1)){
		printf("\nSeja bem-vindo!\n");
	} else {
		if(cadastrado == 0){
			printf("\nSua conta nao foi cadastrada.\n");
		}
		
		if(ativo == 0){
			printf("\nSua conta nao foi ativada.\n");
		}
		
		if(logado == 0){
			printf("\nSua conta nao foi logada.");
		}
	}
	
	
}
