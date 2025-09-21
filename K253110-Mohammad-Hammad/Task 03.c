#include <stdio.h>

int main(){
	int days;
	printf("Enter days in a year : ");
	scanf("%d", &days);
	if (days % 365 == 0){
		printf("This is not a leap year.");
	}
	else if (days % 365 == 1){
		printf("This is a leap year.");
	}
	else{
		printf("INVALID NUMBER OF DAYS!");
	}
	return 0;
}
