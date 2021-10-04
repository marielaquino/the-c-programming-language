#include <stdio.h>

#define YES 1
#define NO  0
/* Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */

int main(void)
{
	int c;          /* current input character */
	int blank;      /* flag for the status of the previous character */

	blank = NO;

	// while the next char is not the end of the line 
	while ((c = getchar()) != EOF) {
		// if it's NOT a blank, then variable blank = 0
		if (c != ' ')
			blank = NO;
		// if blank evaluates to false/0, then put the next char
		if (!blank)
			putchar(c);
		// if it is a blank, then set blank to YES 
		if (c == ' ')
			blank = YES;
	}
	return 0;
}