#include <stdio.h>
int main(int argc, char *argv[]) {
  float hight = 0.0f;
  printf("Enter your hight in feet: ");
  scanf("%f", &hight);
  printf("Your hight is %.2fcm or %.2f feet.\n", hight * 2.54, hight);
  printf("Enter your hight in cm: ");
  scanf("%f", &hight);
  printf("Your hight is %.2f feet or %.2fcm\n", hight / 2.54, hight);
  return 0;
}
