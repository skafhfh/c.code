#include<stdio.h>
int main(){
	int a=4;
	int* p=&a;//&a��ʾȡa�ĵ�ַ��int*��ʾ���ַ��p 
	//��һ�ֱ������ַ-ָ����� 
	printf("%p\n",p);//%pΪ��ַ��ռλ�� 
	printf("%p\n",&a);
	*p=20;//�����ò�������˳�Ŵ���p�еĵ�ַ���ҵ�a���ٰ�a��ֵ�ı� 
	printf("%d\n",a);
	double k = 10;
	double* m = &k;
	printf("%p\n",m);
	printf("%lf\n",*m);
	printf("%d",sizeof(m));
	return 0;
}
