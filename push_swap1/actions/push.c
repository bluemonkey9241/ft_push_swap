#include <stdlib.h>
#include "../push_swap.h"

extern int ACTION_COUNT;

// takes the first number of stack B and adds it to the front of stack A
void	push(t_stack **stackA, t_stack **stackB)
{
	t_stack	*headA;
	t_stack	*headB;

	headA = *stackA;
	headB = *stackB;
	if (headB == NULL)
		return ;
	*stackB = headB->next;
	headB->next = headA;
	*stackA = headB;
}

void	pushA(t_stack **stackA, t_stack **stackB)
{
	push(stackA, stackB);
	print("pa\n");
	ACTION_COUNT++;
}

void	pushB(t_stack **stackA, t_stack **stackB)
{
	push(stackB, stackA);
	print("pb\n");
	ACTION_COUNT++;
}
