#include "stack.h"
#include <stdbool.h>
#include <stdio.h>

void initialize(struct Stack *s) { s->top = -1; }

void push(struct Stack *s, int to_add) {
  if (is_full(s)) {
    printf("Error: cannot push (stack is full)\n");
    return;

  } else {
    s->data[++s->top] = to_add;
  }
}

int pop(struct Stack *s) {
  if (is_empty(s)) {
    printf("Error: cannot pop (stack is empty)\n");
    return -1;

  } else {
    return s->data[s->top--];
  }
}

int top(struct Stack *s) {
  if (is_empty(s)) {
    printf("Error: cannot get top (stack is empty) \n");
    return -1;

  } else {
    return s->top;
  }
}

bool is_empty(struct Stack *s) { return (s->top == -1); }

bool is_full(struct Stack *s) { return (s->top == STACK_SIZE - 1); }
