#include<stdio.h>


int odd(int x){
	int result;
	result =  x % 2;
	return result;
}
int main(){
	printf("%d is %d\n", 5, odd(5));
	printf("%d is %d\n", 4, odd(4));
	return 0;
}
