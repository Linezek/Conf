#include <stdio.h>

int main()
{
  int array[100], size, i, largest;
  
  printf("Enter the number of elements that will be in the array\n");
  scanf("%d", &size);
  printf("Enter %d intergers\n", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }
  largest = array[0];
  for (i = 1; i < size; i++) {
    if (largest < array[i])
      largest = array[i];
  }
  printf("Max element location = %d and value = %d.\n\n", size, largest);
}
