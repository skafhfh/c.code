#include<stdio.h>
int main(){
	float a;
	float s;
	printf("你的体重是：\n");
	scanf("%f",&a);
	s = a*1.6 ;
	printf("经计算，你的身高为%.2f米.",s);
	return 0; 
}
