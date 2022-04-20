#include <stdio.h>

int main()
{
  int array[50];
  int n;
  printf("Enter number of elements u want in array\n");
  scanf("%d", &n);

  printf("Enter your %d integers\n", n);
  int i;
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
    
  int bsearch;
  printf("Enter value to search in the array: \n");
  scanf("%d", &bsearch);

  int start = 0;
  int end = n ;
  int mid = (start+end)/2;
  
  while (start <= end) 
  {
    if (array[mid] < bsearch)
        {
            start = mid + 1;
        }
    else if (array[mid] == bsearch) 
    {
      printf("Input %d found at location %d.\n", bsearch, mid+1);
      break;
    }
    else
      end = mid - 1;
      mid = (start + end)/2;
    }
  
  if (start > end)
    printf("%d not found in the array\n", bsearch);
  getch();
  return 0;
}