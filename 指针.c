#include<stdio.h>
int main(){
	int a=4;
	int* p=&a;//&a表示取a的地址，int*表示存地址入p 
	//有一种变量存地址-指针变量 
	printf("%p\n",p);//%p为地址的占位符 
	printf("%p\n",&a);
	*p=20;//解引用操作符，顺着存在p中的地址，找到a，再把a的值改变 
	printf("%d\n",a);
	double k = 10;
	double* m = &k;
	printf("%p\n",m);
	printf("%lf\n",*m);
	printf("%d",sizeof(m));
	return 0;
}
