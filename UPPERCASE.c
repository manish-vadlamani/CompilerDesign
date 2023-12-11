#include <math.h>
#include <stdio.h>
int main() {
  char c;
  printf("\nEnter a character: ");
  scanf("%c", &c);
  if (c >= 'A' && c <= 'Z') {
    printf("\nUppercase alphabet");
  } else {
    printf("\nNot a Uppercase alphabet");
  }
}
