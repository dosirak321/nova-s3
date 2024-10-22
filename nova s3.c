#include <stdio.h>
#include <string.h>

int main(void) {
  char a[15] = "I am a student";
  int b;
  b = strlen(a);
  for (int k = b; k>=0; k--) {
    printf("%c", a[k]);
  }
  return 0;
}