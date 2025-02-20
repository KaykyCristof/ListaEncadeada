#include "ListaEncadeada.h"

// Implementação das funções

void IniciaLista( Lista **ptr ) {
	*ptr = NULL;
}

int ListaVazia( Lista *ptr ) {
	if( ptr == NULL ) {
		return 1;
	} else {
		return 0;
	}
}

int VerificaAlocacao( Lista *ptr ) {
	if( ptr != NULL ) {
		return 1;
	} else {
		return 0;
	}
}

Lista *AlocaMemoria() {
	Lista *novo = ( Lista *) malloc( sizeof( Lista ) );
	
	if( VerificaAlocacao( novo ) ) {
		novo->info = 0;
		novo->prox = NULL;
		return novo;
	} else {
		printf( "Erro ao alocar memória!\n" );
		return NULL;
	}
}

void DesalocaMemoria( Lista **ptr ) {
	if( ListaVazia( *ptr ) ) {
		printf( "Lista vazia!\n" );
	} else {
		Lista *aux = *ptr;
		
		while( aux != NULL ) {
			*ptr = ( *ptr )->prox;
			free( aux );
			aux = *ptr;
		}
		
		*ptr = NULL;
		
		printf( "Memoria desalocada com sucesso!\n" );
		
	}
}

void InsereFinal( Lista **ptr, int numero ) {
	Lista *novo = AlocaMemoria();
	novo->info = numero;
	
	if( ListaVazia( *ptr ) ) {
		*ptr = novo;
	} else {
		Lista *aux = *ptr;
		
		while( aux->prox != NULL ) {
			aux = aux->prox;
		}
		
		aux->prox = novo;
	}
	
	//printf( "Elemento inserido com sucesso!\n" );
}

void ExibeLista( Lista *ptr ) {
	if( ListaVazia( ptr ) ) {
		printf( "Lista vazia!\n" );
	} else {
		Lista *aux = ptr;
		
		while( aux != NULL ) {
			printf( "%d ", aux->info );
			aux = aux->prox;
		}
		printf( "\n" );
	}
}
