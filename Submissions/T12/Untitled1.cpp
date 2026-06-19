#include <stdio.h>

int main(){
	int a,b,c;
	
	printf("masukkan angka pertama : ");
	scanf("%d",&a);
	printf("masukkan angka kedua : ");
	scanf("%d",&b);
	printf("masukkan angka ketiga : ");
	scanf("%d",&c);
	
	int total = a+b+c;
	printf("Total = %d\n", total);
	
	return 0;
}
