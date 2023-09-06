#include <stdbool.h>

#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 4

struct Stack {
  int top;
  int data[STACK_SIZE];
};

void initialize(struct Stack *s);
void push(struct Stack *s, int to_add);
int pop(struct Stack *s);
int top(struct Stack *s);
bool is_empty(struct Stack *s);
bool is_full(struct Stack *s);

#endif // !STACK_H
