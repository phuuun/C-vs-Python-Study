#include <stdio.h>


int main(){
	int nilai[5];
	int total;
	float rata;
	
	printf("Masukkan 5 nilai : ");
	
	for(int i = 0;i < 5;i++){
		scanf("%d", &nilai[i]);
		total += nilai[i];
	}
	
	rata = total / 5.0;
	
	printf("Rata - rata : %.2f\n", rata);
	
	if(rata >= 80){
		printf("Grade : A");
	}else if(rata >= 70){
		printf("Grade : B");
	}else if(rata >= 60){
		printf("Grade : C");
	}else if(rata >= 50){
		printf("Grade : D");
	}else{
		printf("Grade : E");
	}
	
	
	
	
	return 0;
}
