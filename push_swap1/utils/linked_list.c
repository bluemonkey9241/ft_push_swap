#include "../push_swap.h"
#include <stdlib.h>
#include <stdio.h>
#include "../libft/libft.h"

t_stack	*newStackNode(int number)
{
	t_stack *newNode;

	newNode = malloc(sizeof(t_stack));
	if (!newNode)
		return (NULL);
	newNode->number = number;
	newNode->next = NULL;
	return (newNode);
}

int fillStackA(char **argv, int argc, t_stack **stackA)
{
	t_stack *stackHead;
	t_stack *temp;
	
	argc--;
	stackHead = newStackNode(ft_atoi(argv[argc]));
	if (!stackHead)
		return (ERROR);	
	argc--;
	while (argc > 0)
	{
		temp = newStackNode(ft_atoi(argv[argc]));
		if (!temp)
			return (ERROR);	
		temp->next = stackHead;
		stackHead = temp;
		argc--;
	}
	*stackA = stackHead;
	return (1);
}

void	freeStack(t_stack **stack)
{
	t_stack *current;
	t_stack *next;

	current = *stack;
	next = current->next;
	while (next)
	{
		free(current);
		current = next;
		next = next->next;
	}
}
