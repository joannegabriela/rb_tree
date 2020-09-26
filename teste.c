#include <stdio.h>
#include <stdlib.h>
#include "rb.c"

int main(int argc, char * argv[]) {
	arvore a;
	int opcao;
	inicializar(&a);

	
	adicionar(9, &a);
	adicionar(8, &a);
	adicionar(7, &a);
	adicionar(6, &a);
	adicionar(1, &a);
	adicionar(2, &a);
	adicionar(3, &a);
	adicionar(4, &a);
	adicionar(5, &a);
	
	remover(9, &a);
	remover(8, &a);
	remover(1, &a);
	remover(4, &a);
	//remover(7, &a);

/*
	remover(1, &a);
	remover(4, &a);
	remover(6, &a);
	remover(7, &a);
	remover(8, &a);
	
	remover(2, &a);
	remover(3, &a);

	*/	

	pre_order(a);
	printf("\n");
	imprimir(a);
	printf("\n");
	

}
