#include <stdio.h>
 
int main() {
 
    int NUMBER, horast;
    float valorh,SALARY;
    scanf("%d%d%f", &NUMBER,&horast,&valorh);
    SALARY=horast*valorh;
    printf("NUMBER = %d\n", NUMBER);
	printf("SALARY = U$ %.2f\n", SALARY);
 
    return 0;
}