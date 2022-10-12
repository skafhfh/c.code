#include<stdio.h>
int main(void){
	int weight;
	float value;
	printf("Are you worth your weight in platinum?\n");
	printf("let's check it out.\n");
	printf("Please enter your weight in pounds:");
	scanf("%d",&weight);
	value =1700.0*weight*14.5833;
	printf("Your weight platinum is worth $%.2f.\n",value);
	printf("Your are easily worth that!If platinum prices drop,\n");
	printf("eat more to maintain yout value.\n");
	return 0;
}
