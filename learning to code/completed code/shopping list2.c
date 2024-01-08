#include <stdio.h>
int main()
{
	//base cost for milk
	float milk = 5.21;
	//how much milk you want to get
	float x;
	//total cost of milk
	float total;
	printf("how much milk would you like to buy?\n");
	scanf("%f",&x);
	printf("you have got %2.0f amount of milk\n",x);
	//sum up how much milk you want and how much it will cost
	total = milk*x;
	printf("your total cost will be $%2.2f",total);
	free(x);
	return(0);
}
	
