#include <stdio.h>
#include <math.h>

int main(){
	int a, b;
	scanf_s("%d %d",&a,&b );
	printf("%d", (b - (int)(sqrt((double)b))) - (a-1 - (int)(sqrt((double)(a-1)))));
	return 0;
}

//you have to know the rage of the numbers..?zZ