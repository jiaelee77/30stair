#include <stdio.h>

int main(){
	int one_total = 0;
	int two_total = 0;
	int three_total = 0;

	for (int i = 0; i < 7; i++){
		int num = 0;
		scanf_s("%d", &num);
		//printf("%d\n", num);
		
		if (num < 10)
			one_total = one_total + num;
		else if (num < 100)
			two_total = two_total + num;
		else
			three_total = three_total + num;
	}

	printf("%d %d %d", one_total, two_total, three_total);
	return 0;
}