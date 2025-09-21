#include <stdio.h>

int main(){
	int num1, num2;
	printf("Enter First Number : ");
	scanf("%d", &num1);
	printf("Enter Second Number : ");
	scanf("%d", &num2);
	num1 > num2 ? printf("Maximum number between %d and %d is %d", num1, num2, num1) : printf("Maximum number between %d and %d is %d",num1, num2, num2);
	return 0;
}
