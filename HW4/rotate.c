#include<stdio.h>

void rotate(int *a, int *b, int *c){
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

int main(){
	int a=1;
	int b=2;
	int c=3;
	printf("Before rotate: ");
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	rotate(&a, &b, &c);
	printf("After rotate: ");
	printf("a = %d, b = %d, c = %d\n",  a, b, c);
	return 0;
}
