#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(struct Node **head, char *data) {
  struct Node *temp = malloc(sizeof(struct Node));

  temp->name = malloc(strlen(data) + 1);
  strcpy(temp->name, data);
  temp->next = *head;

  *head = temp;
}

void pop(struct Node **head) {
  if (*head == NULL) {
    printf("Failed, stack is empty\n");
    return;
  }

  struct Node *temp = *head;

  *head = (*head)->next;

  free(temp->name);
  free(temp);
}

void printall(struct Node *head) {
  printf("\n[\n");
  while (head != NULL) {

    printf("%s ", head->name);
    head = head->next;
  }
  printf("\n]\n\n");
}
