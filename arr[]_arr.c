#include<stdio.h>
int main(){
	//char arr[];//错误写法 
	//arr[]="xiyouji";//错误写法 
	char arr[]="xiyouji";
	printf("%s\n",arr);
	//char name[20]="qq";//此时name是数组 
//	printf("%s\n",name);
	char* name="xiyouji";//
	printf("%s\n",name);
	return 0;
}
