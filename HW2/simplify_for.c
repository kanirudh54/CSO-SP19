#include <stdio.h>


int getLine(char s[]) {
    int c, i;
    for (i=0; ; ++i){
      c = getchar();
      if (c == EOF)
	      break;
      if (c == '\n')
	      break;
      s[i] = c;
    }
    if (c=='\n') {
      s[i]= c;
      ++i;
    }
    s[i] = '\0';
    return i;
}

int main() {
   int len;
   char line[100];
   while ((len=getLine(line))>0)
     printf("%d\n", len); 
   return 0;
}

// to run ./simplify_for.out < example_input
