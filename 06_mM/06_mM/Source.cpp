#include <stdio.h>

int main(){
	int tempNum=0;
	int minNum=0;
	int maxNum=0;

	//input Num

	for (int i = 0; i < 7; i++){
		scanf_s("%d", &tempNum);
		//printf("%d",tempNum);
		
		if (i == 0){
			minNum = tempNum;
			maxNum = tempNum;
		}

		else{
			if (minNum > tempNum) 
				minNum = tempNum;
			if (maxNum < tempNum) 
				maxNum = tempNum;
		}
		//printf("i = %d 일 떄 min = %d, max = %d\n", i, minNum, maxNum);
	}

	printf("%d %d", maxNum, minNum);

	return 0;
}

//if문과 for 문이 너무 많음