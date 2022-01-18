#include "../push_swap.h"
#include "../libft/libft.h"

#include <stdio.h>

// checks if the first number is either the lowest or second lowest number in the stack;
// only works for stacks of five;
// return 1 if it is one of the lowest, 0 if it is not
int		findLowest(t_stack *stack)
{
	int higher;
	t_stack *head;
	t_stack *compare;

	higher = 0;
	head = stack;
	compare = head->next;
	while (compare)
	{
		if (head->number < compare->number)
			higher++;
		compare = compare->next;
	}
	if (higher >= 3)
		return (1);
	else
		return (0);
}

void	solveFive(t_stack **stackA, t_stack **stackB)
{
	while (2 - stackLen(*stackB))
	{
		if (findLowest(*stackA))
			pushB(stackA, stackB);
		else
			rotateA(stackA);
	}
	solveThree(stackA);
	if ((*stackB)->number < ((*stackB)->next)->number)
		rotateB(stackB);
	pushA(stackA, stackB);
	pushA(stackA, stackB);
}