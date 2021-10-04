/* 

	Reverse regular program to go backwards from 300 instead of upwards from 0. 
*/

#include <stdio.h>

int main(void)

{
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

		// 6.2f means 6 wide and 2 after decimal point 
	}

	printf("Reverse order \n");

	for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}