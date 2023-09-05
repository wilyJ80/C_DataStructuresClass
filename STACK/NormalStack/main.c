#include "helper.h"
#include <stdio.h>

int main(void) {
  struct Node *head = NULL;

  for (;;) {
    printf("Choose operation (i: insert, d: delete): ");
    char operation;

    scanf(" %c", &operation);
    switch (operation) {

    case 'i':
      printf("Add number: ");
      int number;
      scanf(" %d", &number);

      insert_start(&head, number);

      printf("\n[");
      print_all(head);
      printf("]\n\n");

      break;

    case 'd':
      printf("Deleted: %d\n", delete_start(&head));

      printf("\n[");
      print_all(head);
      printf("]\n\n");

      break;
    }
  }

  return 0;
}
