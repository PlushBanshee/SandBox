#include <stdio.h>
int main()
{
	char itemname[20];
	float itemprice1;
	float itemamount;
	float itemprice2;
	printf("what is the name of your item:\n");
	scanf("%s",itemname);
	printf("how much does this item cost:\n");
	scanf("%f",&itemprice1);
	printf("how many of that item do you want:\n");
	scanf("%f",&itemamount);
	printf("so %s cost $%2.2f you want %2.0f that will add up to $%2.2f",itemname,itemprice1,itemamount,itemprice2=itemamount*itemprice1);
	return(0);
}
