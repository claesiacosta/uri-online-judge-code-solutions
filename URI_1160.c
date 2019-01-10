#include <stdio.h>
#include <math.h>

int main(){
	int T, PA, PB, i,anos;
	float G1, G2;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d %d %f %f",&PA,&PB,&G1,&G2);
		anos=0;
		while(PA<=PB){
			anos+=1;
			PA = PA + floor(PA*(G1/100));
			PB = PB + floor(PB*(G2/100));
			if(anos>100){
				break;
			}
		}
		if(anos>100){
			printf("Mais de 1 seculo.\n");
		}else{
			printf("%d anos.\n",anos);
		}
	}
} 