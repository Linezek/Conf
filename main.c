#include <stdio.h>
/*
 * Filename:
 * Author:
 * Userid: <your PID>
 * Login: cs12sxx
 * Description:
 * Date:
 * Source of Help:
 */

#include <stdio.h>

/* function declaration */
/* Returns the index of max element */
int max_elem_location(int[], int);

/*
 * Function prototype: int main()
 * Description: Main driver function.
 * Parameters: None.
 * Side Effects: Read from stdin and print to stdout
 * Error Conditions: None.
 * Return Value: 0 indicating successful termination
 */
int main() {
  int location, size, array[100], i; //you will need more variables

  printf("Enter the number of elements that will be in the array\n");

  /* TODO: use scanf to get an input (size of the array) from a user */
  scanf("%d", &size);

  printf("Enter %d integers\n", size);
  for (i = 0; i < size; i++) {
  scanf("%d", &array[i]);
  }
  /* TODO: Now prompt for the numbers and add them to an array */

  location = max_elem_location(array , size);

  printf("Max element location = %d and value = %d.\n", location+1, size);
  return 0;
}

/*
 * Function prototype: int int max_elem_location(int a[], int n)
 * Description: function to get the location (index) of the maximum element
 *              in an array
 * Parameters: arg1 - int a[] -- the input array to be searched
 *             arg2 - int n   -- the size (length) of array
 * Side Effects: None.
 * Error Conditions: None.
 * Return Value: the location (index) of the maximum element in such array
 */
int max_elem_location(int a[], int n) {
int i;
int largest = a[0];
for (i = 1; i < n; i++) {
if (largest < a[i])
largest = a[i];
}
return largest;
}
