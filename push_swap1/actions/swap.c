#include "../push_swap.h"
#include <stdlib.h>

extern int ACTION_COUNT;

// swaps the first two number in the stack
void	swap(t_stack **stackHead)
{
	t_stack	*head;
	t_stack	*temp;

	head = *stackHead;
	if (head != NULL && head->next != NULL) //check if there is two or more nodes
	{
		temp = head->next;
		if ((head->next)->next != NULL) // check if there is a third node
		{
			head->next = temp->next;
			temp->next = head;
		}
		else
		{
			temp->next = head;
			head->next = NULL;
		}
		*stackHead = temp;
	}
}

// swaps the first two numers in both stacks
void	swapswap(t_stack **aStackHead, t_stack **bStackHead)
{
	swap(aStackHead);
	swap(bStackHead);
	print("ss\n");
	ACTION_COUNT++;
}

void	swapA(t_stack **stackA)
{
	swap(stackA);
	print("sa\n");
	ACTION_COUNT++;
}

void	swapB(t_stack **stackB)
{
	swap(stackB);
	print("sb\n");
	ACTION_COUNT++;
}
