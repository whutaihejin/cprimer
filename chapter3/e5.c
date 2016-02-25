#include <stdio.h>
int main(int argc, char *argv[]) {
  int age = 0;
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("There are %.2f seconds for your age of %d.\n", age * 3.156e7, age);
  return 0;
}
