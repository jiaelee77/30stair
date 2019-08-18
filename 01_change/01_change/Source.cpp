#include <stdio.h>

int main(){

	int full_money = 1000;
	int rest_money = 0;
	int cost = 0;
	int change[3];//only 10.50.100
	//1st. input num
	scanf_s("%d", &cost);

	//2nd. print chage.
	//ok//printf("%d", cost);
	
	rest_money = full_money - cost;
	//ok//("%d", rest_money);

	//init chage
	change[0] = 100; change[1] = 50; change[2] = 10;
	int i = 0; // init!!!
	for (; i < 3; i++){
		int count = 0;
		if (rest_money >= change[i]){ // // range carefull!!!
			count = rest_money / change[i];
			rest_money = rest_money - (change[i]*count);
			printf("%d ",count);

		}
		else printf("0 "); // compeletely deviding case!!!

	}	
	return 0;
}
