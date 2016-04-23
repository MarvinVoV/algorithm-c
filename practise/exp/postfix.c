#include "stack.h"

#define MAX_EXPR_SIZE 100 /* max size of expression */

typedef enum {
    lparen, rparen, plus, minus, times, divide, mod, eos, operand
} precedence;


precedence get_token(char *symbol, char *expr, int *n){
    *symbol = expr[(*n)++];
    switch(*symbol){
        case '(': return lparen;
        case ')': return rparen;
        case '+': return plus;
        case '-': return minus;
        case '/': return divide;
        case '*': return times;
        case '%': return mod;
        case '\0': return eos;
        default: return operand; /* no error checking, default is operand */
    }
}

int eval(char *expr){
    precedence token;
    char symbol;
    int op1, op2;
    int n = 0; /* counter for the expression string */
    token = get_token(&symbol, expr,  &n);
    while(token != eos){
        if(token == operand)
            add(symbol - '0'); /* stack insert */
        else{
            /* remove two operands, perform operation, and return result to the stack */
            op2 = delete();
            op1 = delete();
            switch(token){
                case plus: add(op1 + op2);
                           break;
                case minus: add(op1 - op2);
                            break;
                case times: add(op1 * op2);
                            break;
                case divide: add(op1 / op2);
                             break;
                case mod: add(op1 % op2);
            }
        }
        token = get_token(&symbol, expr,  &n);
    }
    return delete(); /* return result */
}

int main(void){
	char *s = "23*45*+";
    printf("result is %d\n", eval(s));
    return 0;
}
