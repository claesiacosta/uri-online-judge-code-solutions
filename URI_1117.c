#include <stdio.h>

int main(){
	float nota,notas[2];
	int  i=0;
	while(i<2){
		scanf("%f",&nota);
		if(nota>=0 && nota<=10){
			notas[i]=nota;
			i++;
		}else{
			printf("nota invalida\n");
		}	
	}
	printf("media = %.2f\n", (notas[0]+notas[1])/2);
}
