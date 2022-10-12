#include<stdio.h>
int main(){
	int ch =0;
	while((ch = getchar())!=EOF)//输入ctrl+z可以结束循环，可以打印字符串和数组 
	putchar(ch);
	return 0;
} 
