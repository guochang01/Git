#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int numb,i=0;
	char xnumb[200];
	scanf("%d",&numb);
	while(numb>=0){
		if((numb%16)>=10){
			switch(numb%16){
			
			case 10: xnumb[i]='a';
				break;
			case 11: xnumb[i]='b';
				break;
			case 12: xnumb[i]='c';
				break;
			case 13: xnumb[i]='d';
				break;
			case 14: xnumb[i]='e';
				break;
			case 15: xnumb[i]='f';
				break;
			}
		}
		else {
			xnumb[i]=numb%16;
		}
		numb=(numb-numb%16)/16;
		i++;
	}
	while(i>=0){
		printf("%c",xnumb[i]);
		i--;
	}
	return 0;
}
