#include<stdio.h>
int main() {
	int num,reverse=0;
	printf("enter a number:");
	scanf("%d",&num);
		
		int temp=num;
	        while(temp!=0) {
			reverse=reverse*10+temp%10;
			temp/=10;
		}
		printf("the reverse number is:%d\n",reverse);
scanf("the reverse num is:");
		return 0;
}
