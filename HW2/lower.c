#include <stdio.h>

char lower(char c) {
  return ('A' <= c && c <= 'Z') ? (c - 'A' + 'a') : c;
}

int main() {
  char c;
  while ((c = getchar()) != EOF) {
    putchar(lower(c));
  }
}


