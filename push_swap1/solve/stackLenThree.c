#include "../push_swap.h"
#include <stdlib.h>

void solveThree(t_stack **stackA)
{
	int t;
	int m;
	int b;

	while (!checkInOrder(*stackA))
	{
		t = (*stackA)->number;
		m = ((*stackA)->next)->number;
		b = (((*stackA)->next)->next)->number;
		if ((t < m && m > b && b > t) || (t > m && m < b && b > t) || (t > m && m > b))
			swapA(stackA);
		if (t > m && m < b && b < t)
			rotateA(stackA);
		else if (t < m && m > b && b < t)
			reverseRotateA(stackA);
	}
	return;
}
