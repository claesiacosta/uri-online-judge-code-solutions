#include <stdio.h>
 
int main() {
 
    char nome[20];
 	double salariof, tvendas, total;
    scanf("%s%lf%lf", &nome,&salariof,&tvendas);
    total= salariof + 0.15*tvendas;
	printf("TOTAL = R$ %.2f\n", Ttotal);
 
    return 0;
}