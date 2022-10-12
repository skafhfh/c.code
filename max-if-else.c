#include<stdio.h>
int Max(int x,int y){
	if(x>y)
	return x;
	else
	return y;
}
int main(){
	int num1,num2;
	int max = 0;
	num1=134, num2=114;
	max=Max(num1,num2);
	printf("max is %d",max);
	return 0;
}
