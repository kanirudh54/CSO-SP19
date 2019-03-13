#include <stdio.h>

int htoi(char s[]){
	int i, n=0;
	for(i =0; (s[i]>='0' && s[i] <= '9') || (s[i]>='a' && s[i] <= 'f') || (s[i]>='A' && s[i] <= 'F'); i++){
		if (s[i]>='0' && s[i] <= '9'){
			n = 16*n + (s[i] - '0');
		}
		else if	(s[i]>='a' && s[i] <= 'f'){
			n = 16*n + (s[i] - 'a'+10);
		}
		else if (s[i]>='A' && s[i] <= 'F'){
			n = 16*n + (s[i] - 'A' +10) ;

		}
	}
	return n;
}

int main(){
	// Not dealing with 0x or 0X in this code
	char a[] = "C";  //12
	char b[] = "7B"; //123
	char c[] = "17"; //23
	char d[] = "2F"; //47
	printf("%s in hex is same as %d in decimal\n", c, htoi(c));
	return 0;
}
