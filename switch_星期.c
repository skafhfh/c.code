#include<stdio.h>
int main(){
	int day = 0;
	scanf("%d",&day);
	switch(day){//（）内必须是整型
		case 1://case入 ,case后必须是整型常量表达式 
			printf("星期一\n");
			break;//break出 
		case 2:
		    printf("星期二\n");
		    break;
		case 3:	
		    printf("星期三\n");
		    break;
		case 4:	
		    printf("星期四\n");
		    break;
		case 5:	
		    printf("星期五\n");
		    break;
		case 6:	
		    printf("星期六\n");
		    break;
		case 7:	
		    printf("星期天\n");
		    break;
	}
}
