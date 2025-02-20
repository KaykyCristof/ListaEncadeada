#include "ListaEncadeada.h"

int main()
{
	Lista *ptr;
	
	IniciaLista( &ptr );
	
	InsereFinal( &ptr, 1 );
	InsereFinal( &ptr, 2 );
	InsereFinal( &ptr, 3 );
	
	VerificaBusca( ptr );
	
	DesalocaMemoria( &ptr );
	
	
	
	return 0;
}
