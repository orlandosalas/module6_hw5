/*
 * =====================================================================================
 *
 *       Filename:  House_Proton_hw5_task1.c
 *       	Usage:  ./House_Proton_hw5_task1.c
 *    Description:  Statics, Annulus
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:45:52 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Tyler Madsen (), tylermadsen@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#define PI 3.14159265

/* Function Prototypes */
float AnnulusMoment(float i, float j);

/* Main Program */
int main(void)
{
	float r2, r1, I;
	int i;

	do
	{
		printf("Enter the outer radius: ");
		scanf("%f", &r2);
		printf("Enter the innder radius: ");
		scanf("%f", &r1);

		I = AnnulusMoment(r2,r1);

		if(r1 <= 0 || r2 <=0)
		{
			printf("You can't have a value less than 0!\n");
		}
		else if(r1 >= r2)
		{
			if(r1 == r2)
			{
				printf("The inner radius can't be the same as the outer radius!\n");
			}
			else
			{
				printf("The inner radius can't be greater than the outer radius!\n");
			}
		}
		else
		{
			printf("The second moment of inertia is %.2f\n", I);
			i = 0;
		}
	}
	while(i != 0);

	return 0;
}


/* Function Defenitions */
float AnnulusMoment(float i, float j)
{
	float I;

	I = ((PI / 4)) * ((i * i * i * i)-(j * j * j * j));

	return I;
}

