#include<stdio.h>
int main(){
	int age;
	scanf("%d",&age);
	if(age<18){
	printf("δ����\n");
	printf("����̸����"); 
	}
	else {
    if(age>=18&&age<30)
	printf("������");
	else if(age>=30&&age<55)
	printf("׳��");
	else if(age>=55&&age<85)
	printf("����");
	else
	printf("������");	}
	return 0;
}
