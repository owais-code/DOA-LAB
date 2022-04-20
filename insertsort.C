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
    for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && array[j-1] > array[j])
            {	   
                int temp;     
                temp     = array[j];
                array[j]   = array[j-1];
                array[j-1] = temp;
                j--;
            }
    }
    printf("\tSorted list in ascending order: ");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}