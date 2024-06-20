#include <stdio.h>
#include <math.h>

int main() {
  double a;
  double b;
  double c;

  printf("Enter the side of A\n");
  scanf("%lf", &a);

  printf("Enter the side of B\n");
  scanf("%lf", &b);

  c = sqrt(a*a + b*b);
  printf("Hypotenuse: %0.2lf\n", c);
}
