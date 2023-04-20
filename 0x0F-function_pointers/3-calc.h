#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct for operators
 *
 * @op: The operator symbol
 * @f: The function associated with the operator
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* Function prototypes for basic arithmetic operations */
int op_add(int a, int b); /* Adds two integers */
int op_sub(int a, int b); /* Subtracts two integers */
int op_mul(int a, int b); /* Multiplies two integers */
int op_div(int a, int b); /* Divides two integers */
int op_mod(int a, int b); /* Computes modulus of two integers */

/* Function prototype for a function that selects the correct operation function based on the operator passed as argument */
int (*get_op_func(char *s))(int, int);

#endif
