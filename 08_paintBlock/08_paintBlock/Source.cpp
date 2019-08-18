#include <stdio.h>

int main(){
	int vertical;
	int horizontal;
	int height;

	scanf_s("%d %d %d", &vertical, &horizontal,&height);
	printf("%d ", ((vertical - 2) + (horizontal - 2) + (height - 2)) * 4);
	
	return 0;
}