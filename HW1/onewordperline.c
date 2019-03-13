#include <stdio.h>
#define WITHIN   1
#define OUTSIDE  0
int main(){
	int c;
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			printf("\n");
			putchar(c);
		}
		else{
			putchar(c);
		}
	}
	return 0;
			
}

// To run ./onewordperline.out < example_input
