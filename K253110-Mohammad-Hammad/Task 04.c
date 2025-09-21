#include <stdio.h>

int main(){
	const limit = 500;
	int withdraw;
	printf("Enter amont to withdraw [limit = 500]: ");
	scanf("%d", &withdraw);
	if (withdraw <= 0){
		printf("INVALID AMOUNT!");
	}
	else{
		if ((withdraw <= limit) && (withdraw % 20 == 0)){
			printf("Withdrawal approved.");
		}
		else{
			printf("Withdrawal denied.");
		}
	}
	return 0;
}
