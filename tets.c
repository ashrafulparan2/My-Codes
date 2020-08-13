#include<stdio.h>
int main()
{
	char result[50];
	int num = 001000;
	sprintf(result,"%o",num);
	printf("The string for the num is %s", result);

}

