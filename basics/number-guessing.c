#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0));

  const int MIN = 1;
  const int MAX = 100;

  int answer = (rand() % MAX) + MIN;
  int guess;

  while (guess != answer) {
    printf("Guess the number\n");
    scanf("%d", &guess);
    if (guess < answer) {
      printf("Too low\n");
    }
    else if (guess > answer) {
      printf("Too high\n");
    }
    else if (guess == answer) {
      printf("You got it correct!\n");
      break; 
    }
  }
}
