#include <stdio.h>
#include <stdlib.h>

struct lista{
 	int info;
 	struct lista* prox;
 };
 
typedef struct lista Lista;

Lista* inicializa(){
	return NULL;
}

Lista* insere(Lista* lista,int valor){
	Lista* no=(Lista*) malloc (sizeof(Lista));
	no->info=valor;
	no->prox=lista;
	return no;
}

long long int menor=1000000000; 

int n,posicao;

void buscar(Lista* lista){
	Lista* aux;
	int cont=0;
	for(aux=lista;aux!=NULL;aux=aux->prox){
		if(menor>aux->info){
			menor=aux->info;
			posicao=cont;
		}
		cont++;
	}
}

int main() {
	Lista* lista;
	int i,valor;
	scanf("%d",&n);
	lista= inicializa();
	for(i=0;i<n;i++){
		scanf("%d",&valor);
		lista=insere(lista,valor);
	}
	buscar(lista);
	printf("Menor valor: %lld\nPosicao: %d\n",menor,n-posicao-1);
    return 0;
}