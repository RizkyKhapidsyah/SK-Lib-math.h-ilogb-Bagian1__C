/* ilogb example */
#include <stdio.h>      /* printf */
#include <math.h>       /* ilogb */
#include <conio.h>

/*	Source by CPlusPlus
	Modified For Learn by Rizky Khapidsyah 
	I.D.E : VS2019 */

int main() {
	double param;
	int result;

	param = 10.0;
	result = ilogb(param);
	printf("ilogb(%f) = %d\n", param, result);

	_getch();
	return 0;
}