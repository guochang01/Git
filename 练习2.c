#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char str[5000];
	int i=0,numb=0,space=0,alpha=0,others=0;
	fgets(str,5000,stdin);
	while(str[i]!='\n'){
		if(str[i]>=48&&str[i]<=57){
			numb+=1;
			++i;
		}
		else if(str[i]=32){
			space+=1;
			++i;
		}
		else if((str[i]<=90&&str[i]>=65)||(str[i]<=122&&str[i]>=97)){
			alpha+=1;
			++i;
		}
		else{
			others+=1;
			++i;
		}
	}
	printf("%d %d %d %d",numb,space,alpha,others);
	return 0;
}
