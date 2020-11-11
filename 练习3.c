#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int findmax(int a[5000],int i){
	int k=0;
	int Max=0;
	while(k<=i-1){
		if(a[k]>Max){
			Max=a[k];
			k++;
		}
		else{
			k++;
		}
	}
	return Max;
}
int main() {
	char alpha[5000];
	int m=0,n=0,i=0,max[5000];
	while(alpha[m]=getchar()!='\n'){
		m++;
	}
	m=0;
	while(m<5000){n=m;
		while(alpha[m]!=32){
			m++;
		}
			max[i]=m-n+1;
			i++;
			while(alpha[m]=32){
				m++;
			}
			if(m=strlen(alpha)-1)
			break;
	}
	int maxnumb=findmax(max[i+1],i);
		while(m<5000){n=m;
		while(alpha[m]!=32){
			m++;
		}
		if((m-n)==maxnumb){
			int k=n;
			for(;k<=m;++k){
				printf("%c",alpha[k]);
			}
		}
		while(alpha[m]=32){
				m++;
			}
			if(m=strlen(alpha)-1)
			break;
	}
	return 0;
}

