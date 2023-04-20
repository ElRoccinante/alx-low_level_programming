#ifndef CALC_H
#define CALC_H

/**
 * struct op - A struct to store an operator and its associated function.
 * @op: The operator as a string.
 * @f: The associated function.
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Function prototypes for the various operations */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Function prototype for getting the corresponding operation function */
int (*get_op_func(char *s))(int, int);

#endif
