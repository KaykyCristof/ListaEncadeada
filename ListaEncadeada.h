#ifndef LISTA_H
#define LISTA_H
#include <stdio.h>
#include <stdlib.h>
#define TAM 10000000

// Definindo a struct

typedef struct sLista {
	int info;
	struct sLista *prox;
	double vetor[TAM];
} Lista;

// Protótipo de funções

void IniciaLista( Lista **ptr );
int ListaVazia( Lista *ptr );
int VerificaAlocacao( Lista *ptr );
Lista *AlocaMemoria();
void DesalocaMemoria( Lista **ptr );
void InsereFinal( Lista **ptr, int numero );
void ExibeLista( Lista *ptr );


#endif
