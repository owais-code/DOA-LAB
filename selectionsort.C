#include <stdio.h>
int main()
{
    int n, i, j;
    int array[100];
 
    printf("Enter number of elements to sort: \n");
    scanf("%d", &n);
 
    printf("Enter your %d numbers: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int pos, temp;
   for (i = 0; i < (n - 1); i++) {
      pos = i;
      for (j = i + 1; j < n; j++) {
         if (array[pos] > array[j])
            pos = j;
      }
      if (pos != i) {
         temp = array[i];
         array[i] = array[pos];
         array[pos] = temp;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", array[i]);
   return 0;
}