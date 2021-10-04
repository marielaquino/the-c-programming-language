/* Print value of EOF. */



#include <stdio.h>

int main(void)
{
	printf("%i\n", (getchar()) != EOF);

	printf("EOF is %i\n", EOF);


	return 0;

}