#include <stdio.h>
int main(void)
{
	//starting point
	float age;
	char name[20];
	printf("hello welcome to the world of guessing\n");
	printf("in this game you put in random stuff\n");
	printf("what is your name?\n");
	scanf("%s",name);
	printf("so your name was %s what a nice name\n",name);
	printf("and how old are you?\n");
	scanf("%f",&age);
	printf("so your age is %2.0f\n",age);
	printf("so i know know your are %s and your are %2.0f years old",name,age);
	return(0);
}
