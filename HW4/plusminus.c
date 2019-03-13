#include<stdio.h>

void plusminus(int *x,int *y){
	int temp;
	temp = *x;
	*x = *x + *y;
	*y = temp - *y;
}

int main(){
	int x = 3;
	int y = 6;
	printf("Before plusminus: ");
	printf("x = %d, y = %d \n", x, y);
	plusminus(&x, &y);
	printf("After plusminus: ");
	printf("x = %d, y = %d \n", x, y);
	return 0;
}
