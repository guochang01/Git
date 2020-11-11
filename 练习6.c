#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=2,j=10,q=-3,a[10];
	a[0]=j;
	a[1]=q;
	while(n<=9){
		a[n]=a[n-1]+a[n-2];
		++n;
	}
	n=0;
	while(n<=9){
		printf("%d ",a[n]);
		++n;
	}
	return 0;
}
