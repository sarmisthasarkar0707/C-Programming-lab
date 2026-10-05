// write a c program to count the number of digits
#include <stdio.h>
int main(){
	int a,b;
	printf("enter the number:");
	scanf("%d",&a);
	while (a!=0){
		b=a%10;
		a=a/10;
		 printf("%d",b);
	}
	
	return 0;
}

