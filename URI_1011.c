#include <stdio.h>
#include <math.h> 

int main() {
    int R;
    double pi=3.14159;
    scanf("%i",&R);
    printf("VOLUME = %.3f\n",(4.0/3) * pi * pow(R,3));
	return 0;
}