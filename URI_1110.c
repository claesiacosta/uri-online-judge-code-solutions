#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
 	int info;
 	struct lista* prox;
}Lista;

typedef struct fila{
 	Lista* ini;
 	Lista* fim;
}Fila;

Fila* cria(void){
	Fila* f = (Fila*) malloc(sizeof(Fila));
	f->ini = f->fim = NULL;
	return f;
}

void fila_insere(Fila* f, int v){
	Lista* novo = (Lista*) malloc (sizeof(Lista));
	novo->info = v;
	novo->prox = NULL;
	if(f->fim != NULL)
		f->fim->prox = novo;
	else
		f->ini=novo;
	f->fim=novo;		
}

int retira(Fila* f){
	Lista* t;
	int v;
	if(f->ini == NULL){
		exit(1);
	}
	t = f->ini;
	v = t->info;
	f->ini = t->prox;
	if(f->ini == NULL)
		f->fim = NULL;
	free(t);
	return v;
}
int main(){
	Fila* fila;
	int n,i,vet[100];
	fila = cria();
	scanf("%d",&n);
	while(n != 0){
		int cont=n;
		for(i=1;i<=n;i++){
			fila_insere(fila,i);
		}
		printf("Discarded cards: ");
		while(cont!=1){
			printf("%d",retira(fila));
			if(cont!=2){
				printf(", ");
			}
			fila_insere(fila,retira(fila));
			cont--;
		}
		printf("\n");
		printf("Remaining card: %d\n",retira(fila));
		scanf("%d",&n);
	}
	
	return 0;
}