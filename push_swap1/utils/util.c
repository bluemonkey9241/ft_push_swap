#include "../libft/libft.h"
#include <unistd.h>
#include "../push_swap.h"

void print(char *string)
{
    int len;

    len = ft_strlen(string);
    write(1, string, len);
}

int stackLen(t_stack *stack)
{
    int i;

    i = 0;
    while (stack != NULL)
    {
        stack = stack->next;
        i++;
    }
    return (i);
}

// checks if the numbers in stackA are in order from smallest to largest, returns 1 if they are, 0 if they are not
int checkInOrder(t_stack *stackA)
{
	int x;
	t_stack *temp;

	temp = stackA;
	x = temp->number;
	temp = temp->next;
	while (temp)
	{
		if (x > temp->number)
			return (0);
		x = temp->number;
		temp = temp->next;
	}
	return (1);
}
