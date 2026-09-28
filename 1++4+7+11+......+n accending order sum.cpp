#include <stdio.h>
int main(){
	int input,extra1=0,extra=1,result=0;
	printf("enter a number: \n");
	scanf("%d",&input);
	if (input>0){
	while (extra<=input){
		result=result+extra;
		extra1++;
		extra=extra+extra1;
	}
	printf("the result is %d",result);
	}
	else{
	printf("wrong input!");
}
}
