#include<stdio.h>
int main() {
	int day;
	printf("enter a number (1-6):");
	scanf("%d",&day);
	switch(day) {
		case 1:
			printf("sunday\n");
			break;
		case 2:
			printf("monday\n");
			break;
		case 3:
			printf("tuesday\n");
			break;
		case 4:
			printf("wednesday\n");
			break ;
		case 5:
			printf("thursday\n");
			break;
		case 6:
			printf("friday\n");
			break;
		
		default :
			printf("invalid day\n");
			break;
	}
	return 0;
}
