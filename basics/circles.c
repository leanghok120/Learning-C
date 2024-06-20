#include <stdio.h>

int main() {
  const double PI = 3.14;
  double radius;
  double circumference;
  double area;

  printf("Enter the radius of your circle\n");
  scanf("%lf", &radius);

  circumference = 2 * PI * radius;
  area = PI * radius * radius;

  printf("Circumference: %0.2lf\n", circumference);
  printf("Area: %0.2lf\n", area);

  return 0;
}
