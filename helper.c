#include "helper.h"
#include <stdio.h>
#include <stdlib.h>

void insert_start(struct Node **head, int data) {
  struct Node *temp = malloc(sizeof(struct Node));

  temp->data = data;
  temp->next = *head;
  *head = temp;
}

void print_all(struct Node *head) {
  while (head != NULL) {

    printf("%d ", head->data);
    head = head->next;
  }
}

int delete_start(struct Node **head) {
  if (*head == NULL) {
    printf("List is empty.\n");
    return -1;
  }

  struct Node *temp = *head;
  *head = (*head)->next;

  int to_delete = temp->data;
  free(temp);
  return to_delete;
}
