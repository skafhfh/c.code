#include<stdio.h>
#include<string.h>
struct book{
	char name[20];//name[20]�����飬���Խ����ַ��� 
	//��д��char* name/name��ʾָ��������洢���μǵĵ�ַ
	double price;
};
int main(){
	struct book a = {"���μ�",52.00};
	printf("%s\n",a.name);//.   �ṹ�����.��Ա 
	printf("%lf\n",a.price);//.   �ṹ�����.��Ա 
	struct book* p = &a;
	printf("%lf\n",(*p).price);//.   �ṹ�����.��Ա 
	printf("%s\n",(*p).name);//.   �ṹ�����.��Ա 
	printf("%lf\n",p->price);//->  �ṹ��ָ��->��Ա 
	printf("%s\n",p->name);//->  �ṹ��ָ��->��Ա 
	strcpy(a.name,"C++");//strcpy--string copy--�ַ�������--string.h
	//ǰ��Ϊ����ȥ��������Ϊ��������
	//���ڸı��������� 
	printf("%s\n",p->name);
	a.price=10;
	printf("$%.2lf",p->price);
	return 0;
	
}
