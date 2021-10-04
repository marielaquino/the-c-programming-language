/*
	Fahrenheit/Celcius converter program with a header above the table. 
*/

#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;        /* lower limit of temperature scale */
	upper = 300;      /* upper limit */
	step  = 20;       /* step size */

	fahr = lower;

	// Adding a lil print statement w/ tabs

	printf("Fahrenheit\tCelsius\n");

	while (fahr <= upper) {
		// division with floats to avoid truncation
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%10.0f\t%7.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}

