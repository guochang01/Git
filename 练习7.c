#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x,ix,a;
	scanf("%lf",&a);
	x=a/2;
	ix=(x+a/x)/2;
	while((x-ix)>=pow(10,-5)){
		x=ix;
		ix=(x+a/x)/2;
	}
	printf("%lf",ix);
	return 0;
}
