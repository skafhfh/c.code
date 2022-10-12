#include<stdio.h>
int Max(int x,int y){
	if(x>y)
	return x;
	else
	return y;
}
#define MAX(x,y) (x>y?x:y)//∂®“Â∫Í 
int main(){
	int a=20,b=10;
	int max=0;
	max=Max(a,b);
	printf("%d\n",max);
	max=MAX(a,b);
	printf("%d",max);
	return 0;
}
