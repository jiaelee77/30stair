#include <stdio.h>

int main(){

	//there's no need to present food's name.then,
	int menu[4][4] = {{ 461, 431, 420, 0 },{ 130, 160, 118, 0 },{ 100, 57, 70, 0 },{ 167, 266, 75, 0 }};

	//rf.arr[row][col]->m*n;
	/*int buger[4] = { 461, 431, 420, 0 };
	int beverage[4] = { 130, 160, 118, 0 };
	int side_order[4] = { 100, 57, 70, 0 };
	int dessert[4] = { 167, 266, 75, 0 };*/

	int menu_num=0;
	int total_calorie=0;
	int i = 0;
	for (; i < 4; i++){
		scanf_s("%d", &menu_num);
		//printf("%d\n", menu_num);
		total_calorie = total_calorie + menu[i][menu_num-1];
		//printf("%d\n", menu[i][menu_num-1]);
	}

	printf("Your total Calorie count is %d.",total_calorie);

	return 0;
}