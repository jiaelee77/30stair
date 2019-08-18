#include <stdio.h>
#include <math.h>

int main(){

	int com_num;//1.5aps + monitor_1.0aps
	int printer_num;//2.0aps
	int router_num;//0.5aps
	float amperes=0.0f;
	int total = 0;
	//1t
	scanf_s("%d %d %d", &com_num, &printer_num, &router_num);

	//printf("%d %d %d", com_num, printer_num, router_num);

	//2nd
	amperes = ((1.5 + 1.0)*(float)com_num) + (2.0*(float)printer_num) + (0.5*(float)router_num);
	//printf("%f amperes", amperes);

	printf("%d amperes", (int)((amperes * 2.0f + 9.0f) / 10.0f) * 10);

	return 0;
}