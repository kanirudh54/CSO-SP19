#include <stdio.h>

void changeltox(char s[]){
	for(int i =0; s[i] != '\0'; i++){
		if (s[i] == 'l'){
			s[i] = 'x';
		}
	}
}

int main(){
	char s[50] = "Hello!!";
	printf("Before change %s\n", s);
	changeltox(s);
	printf("After change %s\n", s);
	return 0;
}
