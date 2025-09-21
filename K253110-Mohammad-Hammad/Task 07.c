#include <stdio.h>

int main(){
	int rating;
	printf("Enter movie rating (1 to 5) for \"The Lion King\" : ");
	scanf("%d", &rating);
	switch (rating){
		case 1 : printf("Terrible"); break;
		case 2 : printf("Poor"); break;
		case 3 : printf("Average"); break;
		case 4 : printf("Good"); break;
		case 5 : printf("Excellent"); break;
		default : printf("INVALID RATING"); break;		
	}
	return 0;
}
