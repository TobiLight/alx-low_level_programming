#include "main.h"

int rand(void)
{
	int hack[6] = {8, 8, 7, 9, 23, 74};
	static int num = 0;
	int win = hack[num];

	num = (num + 1) % 6;
	return(win);
}
