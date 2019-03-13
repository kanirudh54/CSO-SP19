#include <stdio.h>
#include <string.h>

void detab(char s[], char t[]) {
  char c;
  int i = 0;
  int j = 0;
  while ((c = s[i]) != '\0') {
    switch (c) {
      case '\t':
        t[j] = '\\';
	j = j + 1;
        t[j] = 't';
        break;
      default:
        t[j] = s[i];
        break;
    }
    i++;
    j++;
  }
  t[j] = '\0';
}

void entab(char s[], char t[]) {
  char c;
  int i = 0;
  int j = 0;
  while ((c = s[i]) != '\0') {
    switch (c) {
      case '\\':
	      switch(s[++i]){
		      case 't':
			      t[j] = '\t';
			      break;
	              default:
			      t[j] = '\\';
			      j++;
			      t[j] = s[i];
			      break;
	      }
	      break;
      default:
        t[j] = s[i];
        break;
    }
    i++;
    j++;
  }
  t[j] = '\0';
}
int main(int argc, char *argv[argc]) {
  char s[] = "abc\tdef\tghi\njkl\tmno\tpqr\n";
  char t[1000];
  char q[] = "abc\\tdef\\tghi\\njkl\\tmno\\tpqr\\n";
  if (argc == 2){
	  if (!strcmp(argv[1],"-en")){
		  printf("Before entab\n%s\n", q);
		  entab(q,t);
		  printf("After entab\n%s\n", t);
	  }
	  else if (!strcmp(argv[1],"-de")){
		  printf("Before detab\n%s\n", s);
		  detab(s,t);
		  printf("After detab\n%s\n", t);
	  }
	  else
		  printf("Wrong arguments given. Only -en and -de are accepted\n");

  }
  else{
	  printf("Only 1 argument should be given\n");
  }
  return 0;
}

