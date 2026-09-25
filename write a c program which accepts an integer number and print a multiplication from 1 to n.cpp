#include <stido.h>
int main(){
	int num,n,result;
	printf("enter any numbers:");
	scanf(" %d ",&n);
	result=1;
	num=1;
	while(num<=n){
		result =result*num;
		num=num+1;
	}
	printf("the result is:%d",result);
	return 0;
}
