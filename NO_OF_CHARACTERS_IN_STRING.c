#include <stdio.h>
#include <string.h>
int main(void) {
  char txt[300];
  printf("Enter string:");
  fgets(txt, sizeof(txt), stdin);
  int i,count = 0;
  for (i = 1; txt[i] != '\0'; i++) {
    if (txt[i] != ' ') {
      count++;
    }
  }
  printf("The number of characters in the string is: %d", count);
  return 0;
}
