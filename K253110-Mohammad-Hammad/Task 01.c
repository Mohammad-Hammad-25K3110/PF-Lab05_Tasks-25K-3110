#include <stdio.h>

int main(){
	char color;
	printf("Enter Color [R : RED, Y : YELLOW, G : GREEN] : ");
	scanf(" %c", &color);
	if (color != 'R'){
		if (color != 'Y'){
			if (color != 'G'){
				printf("INVALID COLOR!");
			}
			else{
				printf("GO!");
			}
		}
		else{
			printf("CAUTION!");
		}
	}
	else{
		printf("STOP!");
	}
	return 0;
}
