#include "../push_swap.h"
#include <stdlib.h>

extern int ACTION_COUNT;

// moves the first number of a stack to the bottom, the rest of the numbers move up
void	rotate(t_stack **stack)
{
	t_stack	*stackHead;
	t_stack	*temp;

	stackHead = *stack;
	if (stackHead == NULL || stackHead->next == NULL)
		return ;
	*stack = stackHead->next;
	temp = stackHead;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = stackHead;
	stackHead->next = NULL;
}

// moves the last number of a stack to the top, the rest of the numbers move down
void	reverseRotate(t_stack **stack)
{
	t_stack	*stackHead;
	t_stack	*temp;
	t_stack	*temp2;

	stackHead = *stack;
	temp = stackHead;
	if (stackHead == NULL || stackHead->next == NULL)
		return ;
	while (temp->next != NULL)
	{
		if ((temp->next)->next == NULL)
		{
			temp2 = temp->next;
			temp->next = NULL;
		}
		else
			temp = temp->next;
	}
	temp2->next = stackHead;
	*stack = temp2;
}

void	rotateA(t_stack **stackA)
{
	rotate (stackA);
	print("ra\n");
	ACTION_COUNT++;
}

void	rotateB(t_stack **stackB)
{
	rotate(stackB);
	print("rb\n");
	ACTION_COUNT++;
}

void	reverseRotateA(t_stack **stackA)
{
	reverseRotate(stackA);
	print("rra\n");
	ACTION_COUNT++;
}

void	reverseRotateB(t_stack **stackB)
{
	reverseRotate(stackB);
	print("rrb\n");
	ACTION_COUNT++;
}

void	doubleReverseRotate(t_stack **stackA, t_stack **stackB)
{
	reverseRotate(stackA);
	reverseRotate(stackB);
	print("rr\n");
	ACTION_COUNT++;
}

void	doubleRotate(t_stack **stackA, t_stack **stackB)
{
	rotate(stackA);
	rotate(stackB);
	print("rrr\n");
	ACTION_COUNT++;
}
