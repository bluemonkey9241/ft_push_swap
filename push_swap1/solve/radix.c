#include <stdio.h>
#include "../push_swap.h"
#include <stdlib.h>

void	initIndex(t_stack **stackA, int *stackArray)
{
	t_stack	*stack;
	int		len;
	int		i;

	len = stackLen(*stackA);
	stack = *stackA;
	while (stack)
	{
		i = 0;
		while (i < len)
		{
			if (stack->number == stackArray[i])
				stack->index = i;
			i++;
		}
		stack = stack->next;
	}
}

int	prep(t_stack **stackA)
{
	int	*stackArray;

	stackArray = llistToArray(*stackA);
	if (!stackArray)
		return (ERROR);
	bubbleSort(stackArray, stackLen(*stackA));
	initIndex(stackA, stackArray);
	free(stackArray);
	return (1);
}

int	largestNumBinLen(t_stack **stackA)
{
	int		i;
	int		binLen;
	t_stack	*stack;

	stack = *stackA;
	i = 0;
	binLen = 0;
	while (stack)	//find largest index number in stack
	{
		if (i < stack->index)
			i = stack->index;
		stack = stack->next;
	}
	while (i)
	{
		i /= 2;
		binLen++;
	}
	return (binLen);
}

int	radix(t_stack **stackA, t_stack **stackB)
{
	int	binLen;
	int	i;
	int	len;

	if (prep(stackA) == ERROR)
		return (ERROR);
	binLen = largestNumBinLen(stackA);
	i = 0;
	while (i < binLen)
	{
		len = stackLen(*stackA);
		while (len)
		{
			if ((*stackA)->index & 1 << i)
				rotateA(stackA);
			else
				pushB(stackA, stackB);
			len--;
		}
		while (*stackB)
			pushA(stackA, stackB);
		i++;
	}
	return (1);
}
