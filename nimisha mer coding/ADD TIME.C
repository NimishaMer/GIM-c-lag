#include<stdio.h>

int main(){
	int time;
	
	printf("ENTER THE TIME :");
	scanf("%d",&time);
	
	if(time<=12){
		printf("GOOD MORNING :");
	}
	else if(time<=16){
			printf("GOOD AFTERNOON :");
	}
	else if(time<=20){
			printf("GOOD EVENING :");
	}
	else if(time<=24){
			printf("GOOD NIGHT :");
	}
	
}