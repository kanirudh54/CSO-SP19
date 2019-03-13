#include <stdio.h>
#define BUFSIZE 100
#include <stdio.h>
#include <ctype.h>

char buf[BUFSIZE];
int  bufp = 0;
int  getch(void);
void ungetch(int);
int getint(int *pn);

int getch(void) {
	return (bufp>0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
	if (bufp >= BUFSIZE)
		printf("ungetch: too many chars\n");
	else
		buf[bufp++] = c;
}

int getint(int *pn) {
	int c, sign, sawsign;
	while (isspace(c=getch())) ;
	if (!isdigit(c) && c!=EOF && c!='+' && c!='-') {
		ungetch(c);
		return 0;
	}
	sign = (c=='-') ? -1 : 1;
	if (sawsign = (c == '+' || c == '-'))
		c = getch();
	if (!isdigit(c)) {
		ungetch(c);
		if (sawsign)
			ungetch((sign == -1) ? '-' : '+');
		return 0;
	}
	for (*pn = 0; isdigit(c); c=getch())
		*pn = 10 * *pn + (c-'0');
	*pn *= sign;
	if (c != EOF)
		ungetch(c);
	return c;
}

int main(){
	int x;
	int y;
	y = getint(&x);
	printf("y = %d, *x = %d\n", y, x);
	return 0;
}
