#ifndef STACK_H
#define STACK_H

struct Node {
  char *name;
  struct Node *next;
};

void push(struct Node **head, char *data);

void pop(struct Node **head);

void printall(struct Node *head);

#endif // !STACK_H
