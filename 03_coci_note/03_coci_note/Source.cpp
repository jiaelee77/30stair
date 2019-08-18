#include <stdio.h>

int couning_note(int note);
int main(){
	int note[8];
	int ascending_bool = 0;
	int descending_bool = 0;
	int j = 0;
	for (; j < 8; j++){

		scanf_s("%d", &note[j]);
	}
	int i = 1;

	for (; i < 8; i++){
		if (note[i] > note[i - 1]) ascending_bool = 1;
		else descending_bool = 1;

		if (ascending_bool == 1 && descending_bool == 1){
			printf("mixed");
			break;
		}
	}


	if (ascending_bool == 1 && descending_bool == 0)
		printf("ascending");
	else if (ascending_bool == 0 && descending_bool == 1)
		printf("descending");
/*		if (ascending_bool == 1 && descending_bool == 1){
			printf("mixed");
			break;
		}

		else {
			if (note[i]>note[i - 1])
				ascending_bool = 1;

			else
				descending_bool = 1;
		}
	}

	if (ascending_bool == 1 && descending_bool == 0)
		printf("ascending");
	else if (ascending_bool == 0 && descending_bool == 1)
		printf("descending");
*/
	return 0;
}
