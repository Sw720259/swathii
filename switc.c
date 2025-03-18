#include<stdio.h>
int main() {
	int grade;
	printf("enter a number:%d\n");
	scanf("%d",&grade);

	switch(grade) {
		case A:
			printf("\n excellent");
			break;
		case B:
			printf("\ngood");
			break;
		case C:
			printf("\nfail");
			break;
		case D:
			printf("\nfailed students");
			break;
		default:
			printf("\n invalid grade");
			break;
	}
	return 0;

}
