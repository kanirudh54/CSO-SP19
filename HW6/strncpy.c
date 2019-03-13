#include<stdio.h>

char *mystrcpy(char *s, char *t, int n) {
	int count = 0;
	while (*s++ = *t++){
		count++;
		if (count ==n) break;
	}
	return s;
}


int main(){
	char s[5];
	char *t = "Hello World!!";
	mystrcpy(s, t, 3);
	printf("%s\n", s);
	return 0;
}
