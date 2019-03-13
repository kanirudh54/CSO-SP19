#include <stdio.h>


void escape(char s[], char t[]) {
  char c;
  int i = 0;
  int j = 0;
  while ((c = s[i]) != '\0') {
    switch (c) {
      case '\n':
        t[j] = '\\';
	j = j + 1;
        t[j] = 'n';
        break;
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

int main() {
  char s[] = "abc\tdef\tghi\njkl\tmno\tpqr\n";
  char t[1000];
  escape(s, t);
  printf("%s\n", t);
}

