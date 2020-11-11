#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double x,y,z,s;
	scanf("%lf %lf",&x,&y);
	if(x<0&&y<0){
		z=exp(x+y);
	}
	else if((x>=0&&x<1)&&y>=0){
		z=exp(2*x-y);
	}
	else if(x>=1){
		z=log(x);
	} 
	s=x+y+z;
		printf("%lf",s);
	return 0;
}
