#include <stdio.h>

int main(){
	int num;
	printf("Enter number : ");
	scanf("%d", &num);
	if ((num % 3 == 0) && (num % 5 ==0)){
		printf("Number is divisble by 3 and 5 both.");
	}
	else{
		printf("Number is not divisble by 3 and 5 both.");
	}
	return 0;
}
