#include <stdio.h>

int main(){
	int age;
	printf("Enter Age : ");
	scanf("%d", &age);
	if (age > 0){
		if (age > 12){
			if (age >= 20){
				if (age >= 50){
					printf("You are a senior.");
	
				}
				else{
					printf("You are an adult.");
				}
			}
			else{
				printf("You are a teenager.");
			}
		}
		else{
			printf("You are a Child.");
		}
	}
	else{
		printf("INVALID AGE!");
	}
	return 0;
}
