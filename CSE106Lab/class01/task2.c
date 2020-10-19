#include <stdio.h>

int
main ()
{
  int array[100] =
    { 17, 5, 123, 25, 12, 93 }, resurved_array[100], position = 0, n =
    6, c = 0, target_num = 123;

  // find the position of target number
  for (int i = 0; i <= n; i++)
    {
      if (array[i] == target_num)
	{
	  position = i;
	}
    }

  // take the elements from array and push it to resurved_array
  for (int i = 0; i <= position; i++)
    {
      resurved_array[i] = array[i];
      array[i] = 0;
    }

  // take elements from resurved_array and push it back to array as per index
  for (int i = position - 1; i >= 0; i--)
    {
      array[c] = resurved_array[i];
      c++;
    }
  // remove and replace the 0 element with other elements
  for (int i = position; i < n - 1; i++)
    {
      array[i] = array[i + 1];
    }
  // as we have deleted an array we need to reduce the value of n
  n = n - 1;

  // show the results
  printf ("After removing element the array is: \n");
  for (int i = 0; i < n; i++)
    {
      printf ("%d \n", array[i]);
    }

}
