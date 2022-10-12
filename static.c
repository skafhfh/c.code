#include<stdio.h>
void text(void){
	 int a=1;
	a++ ;
	printf("a = %d\n",a);
}
int main(){
	int i=0;
	while(i<5){
		text();
		i++;
	}
	return 0;
}
