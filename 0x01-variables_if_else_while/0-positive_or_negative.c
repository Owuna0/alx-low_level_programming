#include <stdlib.h>
#include <time.h>
/* headers go here */

/* betty style doc for function */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code */
	return (0);
}
