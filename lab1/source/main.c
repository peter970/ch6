#include<stdio.h>
#include<stdlib.h>
#include<imformation.h>
void main(void) {
	Person P;
	printf("Please in put your name: ");
	gets(P.name);
	printf("Please input your gender (0 for woman,1 for man)");
	scanf_s("%d", &P.gender);
	printf("Please input your age: ");
	scanf_s("%d", &P.age);
	printf("\n Hi! %s .", P.name);
	if (P.gender == 0)
		printf("you are a %d-year-old-woman.\n", P.age);
	else
		printf("you are a %d-year-old man.\n", P.age);
	system("pause");
}