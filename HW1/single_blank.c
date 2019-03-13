#include<stdio.h>

int main(){
	int c;
	int is_space = 0; // intially the flag is false
	while((c = getchar()) != EOF){
		if(c == ' ' && is_space == 0){
			is_space = 1;
			putchar(c);
		}
		else if(c != ' '){
			is_space = 0;
			putchar(c);
		}
	}
	return 0;
}
