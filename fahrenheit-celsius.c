#include <stdio.h>

/**
 * Print Fahrenheit-Celsius table
 * for fahr = 0, 20, ...., 300
 */
main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0.0;
	upper = 300.0;
	step = 20.0;

	fahr = lower;

	printf("+------------+---------+\n");	
	printf("| Fahrenheit | Celsius |\n");	
	printf("+------------+---------+\n");	

	while(fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32.0);
	
		printf("| %10.0f | %7.2f |\n", fahr, celsius);
		fahr = fahr + step;
	}
	
	printf("+------------+---------+\n");	

	lower = 0.0;
	upper = 300.0;
	step = 20.0;

	celsius = lower;

	printf("+---------+------------+\n");	
	printf("| Celsius | Fahrenheit |\n");	
	printf("+---------+------------+\n");	

	while(celsius <= upper)
	{
		fahr =  (celsius / (5.0/9.0)) + 32.0;
					
		printf("| %7.0f | %10.0f |\n", celsius, fahr);
		celsius = celsius + step;
	}

	printf("+---------+------------+\n");	
}
