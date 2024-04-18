#include <stdio.h>

int main(){
	
	float number, sum = 0;
	
	while (number >= 0){
		
		printf("Enter a number: ");
		scanf("%f", &number);
		
		sum = sum + number;
		
	}
	
	printf("Sum = %f", sum);
	
	return 0;
}
