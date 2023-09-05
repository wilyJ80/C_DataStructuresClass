#ifndef HELPER_H
#define HELPER_H

struct Node {
  int data;
  struct Node *next;
};

void insert_start(struct Node **head, int data);

void print_all(struct Node *head);

int delete_start(struct Node **head);

#endif // !HELPER_H
