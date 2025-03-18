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
			printf("\n very good");
			break;
		case D:
			printf("\nbad");
			break;
		case F:
			printf("\nfailed students");
			break;
		default:
			printf("\n invalid grade");
			break;
	}
	return 0;

}
