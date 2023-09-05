#include "stack.h"
#include <stdio.h>

int main(void) {

  struct Node *head = NULL;

  for (;;) {
    printf("Enter u to push, o to pop: ");
    char code;
    scanf(" %c", &code);

    switch (code) {

    case 'u':
      printf("To push: ");
      char name[20];
      scanf(" %s", name);

      push(&head, name);
      printall(head);

      break;

    case 'o':

      pop(&head);
      printall(head);
      break;
    }
  }

  return 0;
}
