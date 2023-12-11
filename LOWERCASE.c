#include <math.h>
#include <stdio.h>
int main() {
  char c;
  printf("\nEnter a character: ");
  scanf("%c", &c);
  if (c >= 'a' && c <= 'z') {
    printf("\nLowercase alphabet");
  } else {
    printf("\nNot a Lowercase alphabet");
  }
}
