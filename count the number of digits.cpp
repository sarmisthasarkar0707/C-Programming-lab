// write a c program to count the number of digits
#include <stdio.h>
int main(){
	int a,b,c;
	printf("enter the number:");
	scanf("%d",&a);
	while (a>=0){
		b=a%10;
		a=a/10;
		c=c+1;
	}
	printf("sum of the numbers:%d",c);
	return 0;
}

