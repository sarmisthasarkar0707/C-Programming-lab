#include <stdio.h>
int main(){
	int input,result,extra=2;
	printf("enter a number to get sum from 2 in gap of 3: ");
	scanf("%d",&input);
	if(input>2){
		while (extra<=input){
			result =result+extra;
			extra=extra+3;
		}
		printf("the result is %d.",result);
	}
	else{
		printf("wrong input!");
	}
	return 0;
}
