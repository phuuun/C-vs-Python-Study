#include <stdio.h>

int main(){
	
	float nilai[5];
	float r = 0;
	

	printf("Masukkan 5 nilai: ");
	for (int i = 0; i < 5; i++){
		scanf("%f", &nilai[i]);
	}
	

	for (int i = 0; i < 5; i++){
		r += nilai[i];
	}
	r = r / 5;
	printf("\nRata-rata: %.2f\n", r);
	
	
	if (r >= 80){
		printf("Grade: A\n");
	} else if (r >= 70){
		printf("Grade: B\n");
	} else if (r >= 60){
		printf("Grade: C\n");
	} else {
		printf("Grade: D\n");
	}
	
	return 0;
}
