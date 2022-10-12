#include<stdio.h>
int main(){
	int i=1;
	int a=0;
	while(i<=100){
		a=i%2;
		if(1==a)
		printf("%d\n",i);   	
		i++;
	}
	return 0;
}
