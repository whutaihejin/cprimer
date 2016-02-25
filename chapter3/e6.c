#include <stdio.h>
int main(int argc, char *argv[]) {
  int quart = 0;
  printf("Enter the number of quart： ");
  scanf("%d", &quart);
  printf("Contains of %e water molecular for %d quart.\n", quart * 950 / 3.0e-23, quart);
  return 0;
}
