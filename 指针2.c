#include<stdio.h>
int main(){
	char ch='a';
	printf("%p\n",&ch);
	char* cp=&ch;//���ַ��ĵ�ַ����char* 
	*cp='A';
	printf("%c\n",ch);
	printf("%d",sizeof(cp));
	return 0;
} 
