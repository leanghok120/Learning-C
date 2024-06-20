#include <stdio.h>

int main() {
  FILE *pInput = fopen("/home/leanghok/readme.txt", "r");
  FILE *pOutput = fopen("output.txt", "a");
  char buffer[255];


  if (pInput == NULL) {
    printf("Unable to read file!\n");
    return 1;
  }

  while (fgets(buffer, 255, pInput) != NULL) {
    fprintf(pOutput, "%s", buffer);
  }

  fclose(pInput);
  fclose(pOutput);

  return 0;
}
