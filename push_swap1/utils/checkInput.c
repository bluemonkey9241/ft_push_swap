#include "../push_swap.h"
#include "../libft/libft.h"

#include <stdio.h>

// checks if all characters in a string are numbers, returns 1 if they are, 0 if they are not
int strIsNumber(char *string)
{
	while (*string)
	{
		if (*string == '-')
			string++;
		if (!ft_isdigit(*string))
			return (ERROR);
		string++;
	}
	return (1);
}

// checks if all given arguments in argv are numbers, returns 1 if they are, ERROR (-1) if they are not
int checkNum(int argc, char **argv)
{
	argc--; 
	while (argc > 0)
	{
		if (strIsNumber(argv[argc]) == ERROR)
			return (ERROR);
		argc--;
	}
	return (1);
}

int checkDuplicate(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc - 1) // -1 because the last integer does not have to be checked
	{
		j = i;
		while (j < argc - 1)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j + 1]))
				return (ERROR);
			j++;
		}
		i++;
	}
	return (1);
}

// checks if there are any duplicate numbers in stack, returns 1 if there are, 0 if there aren't
// int checkDup(t_stack **stack)
// {
// 	t_stack *current;
// 	t_stack *compare;

// 	current = *stack;
// 	while (current->next)
// 	{
// 		compare = current->next;
// 		while (compare)
// 		{
// 			if (current->number == compare->number)
// 				return (1);
// 			compare = compare->next;
// 		}
// 		current = current->next;
// 	}
// 	return (0);
// }

int checkInput(int argc, char **argv)
{
	if (argv[1] == NULL)
		return (ERROR);
	if (checkNum(argc, argv) == ERROR)
		return (ERROR);
	else if (checkDuplicate(argc, argv) == ERROR)
		return (ERROR);
	else
		return (1);
}

// int main(int argc, char ** argv)
// {
// 	int check = checkDuplicate(argc, argv);
	
// 	printf("check: %i", check);
// }