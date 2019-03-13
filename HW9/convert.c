#include <stdio.h>
#include <string.h>
#include <ctype.h>


// compile accordingly i.e gcc convert.c -o lower or gcc convert.c -o upper
int main(int argc, char * argv[argc]){
	int c;
	if(strcmp(argv[0], "./lower") == 0){
		while(c=getchar())
			putchar(tolower(c));
	}
	else if(strcmp(argv[0], "./upper") == 0){
		while(c=getchar())
			putchar(toupper(c));
	}
	else
		printf("Wrong program name execute as ./lower or ./upper\n");
	return 0;
}
