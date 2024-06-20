#include <stdio.h>

void sort(int array[], int length) {
  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - 1; j++) {
      if (array[j] > array[j+1]) {
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    } 
  }
}

void printArray(int array[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d\n", array[i]) ;
  }
}

int main() {
  int nums[] = {4, 1, 2, 2, 3, 10};
  int numsLength = sizeof(nums) / sizeof(nums[0]);

  sort(nums, numsLength);

  printArray(nums, numsLength);
}
