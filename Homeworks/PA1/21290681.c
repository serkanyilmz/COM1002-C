#include <stdio.h>

int main() {
char* products[] = {"Apple", "Orange", "Tomate", "Meat", "Chicken", "Milk", "Yoghurt", "Egg", "Lemonate", "Coke"};
float prices[] = {5, 7, 9, 50, 25, 2.5, 4.2, 1.1, 1.9, 2.3};
char* units[] = {"kg", "kg", "kg", "kg", "kg", "lt", "kg", "kg", "lt", "lt"};

printf("****************Online Shopping*****************\n1- Apple	5$\n2- Orange	7$\n3- Tomate	9$\n4- Meat   	50$\n5- Chicken	25$\n6- Milk   	2.5$\n7- Yoghurt	4.2$\n8- Egg   	1.1$\n9- Lemonate	1.9$\n10-Coke  	2.3$\n************************************************\n");

float total = 0;

while (1) {
	int num;
        printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price): ");
        scanf("%d", &num);
        
        if (num == 0) {
		char ans;
            	printf("Are you sure (y/n) : ");
            	scanf(" %c", &ans); printf("%c\n",ans);

            	if (ans == 'y') {
                	printf("Have a good day...\n");
                	break;}
	}
        else if (num == -1) {
		printf("-1\n");
            	int bucket;
            	printf("Your total price is %.2f$. How much money you enter: ", total);
            	scanf("%d", &bucket); printf("%d.00$\n",bucket);

            	while (total > bucket) {
                	printf("Your money is not enough. You must add %.2f$ for total price. How much money you enter: ", total - bucket);
                	int amount;
                	scanf("%d", &amount);
                	printf("%d.00$\n",amount);
                	bucket += amount;}

            	printf("Total price has been paid. Your remaining money %.2f$.\nHave a good day...\n", bucket - total);
            	break;
	}
	else {
		int quantity;
            	scanf("%d", &quantity);
            	float product_price = prices[num-1];
            	total += quantity * product_price;
            	printf("%d.00 %s %s: %.2f$\n", quantity, units[num-1], products[num-1], quantity * product_price);
        }
}//while end

return 0;

}
