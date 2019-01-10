#include <stdio.h>

int main(){
	int N, X, Y, i, j,soma;
	scanf("%i",&N);
	for(i=0;i<N;i++){
		scanf("%d %d",&X,&Y);
		if(X%2==0){
			X+=1;
		}
		soma=0;
		for(j=0;j<Y;j++){
			soma+=X+2*j;
		}
		printf("%d\n",soma);
   }
}