#include <stdio.h>
int main()
{
	int hours;
	int days;
	float pay;
	printf("how much money do you get paid?\n");
	scanf("%f",&pay);
	printf("how many hours do you work?\n");
	scanf("%d",&hours);
	printf("how many days do you work?\n");
	scanf("%d",&days);
	float total;
	total = days*hours;
	float total2;
	total2 = total*pay;
	printf("you will make %2.2f\n",total2);
	return(0);
}
