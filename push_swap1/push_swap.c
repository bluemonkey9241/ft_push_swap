#include <stdio.h>
#include <libc.h>
#include <stdlib.h>
#include "push_swap.h"

#define NEWLINE printf("\n");

int ACTION_COUNT = 0;

int main(int argc, char **argv)
{
	t_stack *stackA;
	t_stack *stackB;

    if (checkInput(argc, argv) == ERROR)
    {
        print("ERROR");
        return (-1);
    }
    if (fillStackA(argv, argc, &stackA) == ERROR)
    {
        print("ERROR");
        return (-1);
    }
    if (checkInOrder(stackA))
        return (0);
    else if (argc == 4)
        solveThree(&stackA);
    else if (argc == 6)
        solveFive(&stackA, &stackB);
    else
        if (radix(&stackA, &stackB) == ERROR)
        {
            print("Error\n");
            return (-1);
        }
    printf("steps: %i", ACTION_COUNT);
	return (0);
}









// void printBinary(int x)
// {
// 	int i;

// 	i = 0;
// 	while (i < 32)
// 	{
// 		if (x  & (1 << i))
// 			printf("1");
// 		else
// 			printf("0");
// 		i++;
// 	}
// }

// int main(void)
// {
// 	int x = -2147483646;

// 	printBinary(x);
// }

/*
convert to binary -> x is the amount of bits
if the (x - 0)th bit is zero push to b, if it is 1 rotate. When all numbers are checked push everything back to a
if the (x - 1)th bit is zero push to b, if it is 1 rotate. When all numbers are checked push everything back to a
repeat till x - 1 = 0
the stack is sorted
 */