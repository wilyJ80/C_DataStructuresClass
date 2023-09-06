#include "stack.h"
#include <stdio.h>

int main(void) {
  struct Stack s;

  initialize(&s);

  for (;;) {
    printf("Choose operation:\n");
    printf("u -> push; o -> pop; t - return top");

    char operation;
    scanf(" %c", &operation);

    switch (operation) {

    case 'u':
      printf("Enter number to add: ");

      int number;
      scanf(" %d", &number);
      push(&s, number);
      break;

    case 'o':
      pop(&s);
      break;

    case 't':
      top(&s);
      break;
    }
  }

  return 0;
}

// to do: function list all, corrections to the code
