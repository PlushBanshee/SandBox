#include <stdio.h>
int main()
{
	//shopping list items
	float item01,item02,item03,item04;
	float total;
	//cost for items $00.00
	printf("how much does the milk cost?\n");
	scanf("%f",&item01);
	printf("how much does the eggs cost?\n");
	scanf("%f",&item02);
	printf("how much does the bread cost?\n");
	scanf("%f",&item03);
	printf("how much does the bacon cost?\n");
	scanf("%f",&item04);
	//sums up the cost for items
	total = item01+item02+item03+item04;
	printf("the total cost for everything is\n");
	printf("milk $%2.2f\n",item01);
	printf("eggs $%2.2f\n",item02);
	printf("bread $%2.2f\n",item03);
	printf("bacon $%2.2f\n",item04);
	printf("= $%2.2f",total);
	return(0);
}
