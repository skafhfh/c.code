#include<stdio.h>
#include<string.h>
struct book{
	char name[20];//name[20]是数组，可以接收字符串 
	//或写成char* name/name表示指针变量，存储西游记的地址
	double price;
};
int main(){
	struct book a = {"西游记",52.00};
	printf("%s\n",a.name);//.   结构体变量.成员 
	printf("%lf\n",a.price);//.   结构体变量.成员 
	struct book* p = &a;
	printf("%lf\n",(*p).price);//.   结构体变量.成员 
	printf("%s\n",(*p).name);//.   结构体变量.成员 
	printf("%lf\n",p->price);//->  结构体指针->成员 
	printf("%s\n",p->name);//->  结构体指针->成员 
	strcpy(a.name,"C++");//strcpy--string copy--字符串拷贝--string.h
	//前者为拷贝去处，后者为拷贝内容
	//用于改变数组内容 
	printf("%s\n",p->name);
	a.price=10;
	printf("$%.2lf",p->price);
	return 0;
	
}
