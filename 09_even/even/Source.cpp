#include <stdio.h>
//����ǰ����� ¦���� .. ���� ����
int main(){
	int even_count=0;
	int a;
	int b;
	
	scanf_s("%d %d",&a, &b);
	//printf("%d %d", a, b);
	while (a<=b){
		
		//a�� ����� ����
		int count = 0;
		int i = 0;
		for (i = 1; i < a + 1; i++){	
			if (a % i == 0) count++;
		}

		//����ǰ����� ¦������ �ǈ�
		if (count % 2 == 0)	even_count++;
		a++;
	}
	printf("%d", even_count);
	return 0;
}


/*


#include <stdio.h>
#include <math.h>
void main(){
int a,b,c;
scanf("%d %d",&a,&b);
printf("%d",(b-(int)(sqrt(b)))-(a-1-(int)(sqrt(a-1))));
}

</math.h></stdio.h>
*/