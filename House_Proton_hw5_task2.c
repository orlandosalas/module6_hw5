/*
 * =====================================================================================
 *
 *       Filename:  protons_hw5_task2.c
 *       	Usage:  ./protons_hw5_task2.c
 *    Description:  Make Miles Km Table
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:37:43 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Orlando Salas (), orlandosalas@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */

/* Function Prototypes */
float MitoKi(int m1); // expects an integer and returns a float


/* Main Program */
int main(void)
{
	int inmi, enmi, incra; // miles: start and finish
	float k2; // ouput (kilometers) as float

	printf("We are going to convert miles to kilometers.\nPlease enter a mile value: ");
	scanf("%d", &inmi);
	printf("Enter your ending mile: ");
	scanf("%d", &enmi);
	printf("Enter a desired incrament for your conversions: ");
	scanf("%d", &incra);
	

	printf("Miles = Kilometers\n");
	printf("-----   ----------\n");

	// increment
	
	for(int i = inmi; i <= enmi  ; i+=incra)// last part indicates that
											//loop icraments by desired incrament 
	{
		k2 = MitoKi(inmi); // calls function that expects a data return w/ float
		printf("%3d       %-.2f\n", inmi, k2);
		inmi = inmi + incra;
	}
	return 0;
}


/* Function Defenitions */
float MitoKi(int m1)
{
	float k2;
	k2 = m1 * 1.61; // takes what is stored. note: notice how it is m1 and not inmi

	return k2; // returns to main
}

