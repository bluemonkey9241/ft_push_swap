#include "../push_swap.h"
#include "../libft/libft.h"
#include <stdlib.h>

#include <stdio.h>

int	*llistToArray(t_stack *stack)
{
	int	len;
	int	*stackArray;
	int	i;

	i = 0;
	len = stackLen(stack);
	stackArray = malloc(sizeof(int) * len);
	// printf("test: %i", (int)(sizeof(stack->number));
	if (!stackArray)
		return (NULL);
	while (i < len)
	{
		// printf("i: %lu || len: %i || test: %lu ||", sizeof(int), len, sizeof(stack->number));	
		// *(stackArray + (i * sizeof(int))) = stack->number;
		// printf("test: %lu", sizeof(stack->number));
		stackArray[i] = (int)(stack->number);
		stack = stack->next;
		i++;
	}
	return (stackArray);
}

void	bubbleSwap(int *stack)
{
	int	temp;

	temp = *stack;
	*stack = stack[1];
	stack[1] = temp;
}

int	isInOrder(int *stack, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (stack[i] > stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	bubbleSort(int *stack, int len)
{
	int	i;

	while (!isInOrder(stack, len))
	{
		i = 0;
		while (i < len - 1)
		{
			if (stack[i] > stack[i + 1])
				bubbleSwap(&stack[i]);
			i++;
		}
	}
}
