#include<stdio.h>
int main(){
	int day;
	scanf("%d",&day);
	switch(day){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日");
		    break;
		case 6:
		case 7:
		    printf("休息日");
			break;
		default:
		    printf("输入错误,请重试"); 
		
			
	}
	return 0;
}
