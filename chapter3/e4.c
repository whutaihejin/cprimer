#include <stdio.h>
int main(int argc, char *argv[]) {
  float num = 0.0f;
  printf("Enter a float number: ");
  scanf("%f", &num);
  printf("The input is %f or %e\n", num, num);
  return 0;
}
