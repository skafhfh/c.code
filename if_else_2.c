#include<stdio.h>
int main(){
	int age;
	scanf("%d",&age);
	if(age<18){
	printf("未成年\n");
	printf("不能谈恋爱"); 
	}
	else {
    if(age>=18&&age<30)
	printf("年轻人");
	else if(age>=30&&age<55)
	printf("壮年");
	else if(age>=55&&age<85)
	printf("老年");
	else
	printf("老寿星");	}
	return 0;
}
