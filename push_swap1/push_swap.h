#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define ERROR -1

typedef struct s_stack
{
	int number;
	int index;
	struct s_stack *next;
} t_stack;

int	fillStackA(char **argv, int argc, t_stack **stackA);

//INPUT CHECK
int checkInput(int argc, char **argv);

//ACTIONS
void	swapA(t_stack **stackA);
void	swapB(t_stack **stackB);
void	swapswap(t_stack **aStackHead, t_stack **bStackHead);
void	pushA(t_stack **stackA, t_stack **stackB);
void    pushB(t_stack **stackA, t_stack **stackB);
void	rotateA(t_stack **stackA);
void	rotateB(t_stack **stackB);
void	reverseRotateA(t_stack **stackA);
void	reverseRotateB(t_stack **stackB);
void	doubleReverseRotate(t_stack **stackA, t_stack **stackB);
void	doubleRotate(t_stack **stackA, t_stack **stackB);

//SOLVE
void	solveThree(t_stack **stackA);
void    solveFive(t_stack **stackA, t_stack **stackB);

	//cheatyradix
int		radix(t_stack **stackA, t_stack **stackB);
int		largestNumBinLen(t_stack **stackA);
void    initIndex (t_stack **stackA, int *stackArray);
void	bubbleSort(int *stack, int len);
void	bubbleSwap(int *stack);
int		*llistToArray(t_stack *stack);
int		isInOrder(int *stack, int len);

//UTIL
int		findLowest(t_stack *stack);
int		checkInOrder(t_stack *stackA);
int		stackLen(t_stack *stack);
void	print(char *string);
void	freeStack(t_stack **stack);

#endif
