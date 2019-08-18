#include <stdio.h>

int main(){
	unsigned int divisor=1;
	unsigned int divisor_count = 0;
	unsigned int divisor_sum = 0;
	unsigned int divisor_multip = 1;
	unsigned int num;
	//int point[3] = { 1000, 100, 10 };
	
	scanf_s("%d", &num);
	
	while (divisor<=num){
		if (num % divisor == 0){
			divisor_count++;
			divisor_sum = divisor_sum + divisor;
			divisor_multip = (divisor_multip*divisor)%10;
			printf("%d ", divisor);
			//printf("%d \n", divisor_multip);

		}
		divisor++;
	}
	
	printf("\n%d \n%d \n%d", divisor_count, divisor_sum, divisor_multip);
	
}