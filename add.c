#include<stdio.h>
int add(int x ,int y){
	int z=0;
	z=x+y;
	return z;
}
int main(){
	int a=12, b=23;
	int num;
	num = add(a,b);
	printf("%d",num);
	return 0;
}
