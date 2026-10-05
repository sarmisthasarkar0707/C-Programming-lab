//write a c program to find a sum of the digit of the whole number.
#include <stdio.h>
int main(){
	int a,b,c;
	printf("enter the number:");
	scanf("%d",&a);
	while (a!=0){
		b=a%10;
		a=a/10;
		c=b+c;
	}
	printf("sum of the numbers:%d",c);
	return 0;
}

