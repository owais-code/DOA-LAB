#include <limits.h>
#include <stdio.h>
#define max(a,b) (a > b) ? a : b
 
int maxs(int a, int b, int c) 
    { 
        return max(max(a, b), c); 
    }

int maxCrossSum(int arr[], int l, int m, int h)
    {
        int sum = 0;
        int left_sum = INT_MIN;
        for (int i = m; i >= l; i--) {
            sum = sum + arr[i];
            if (sum > left_sum)
                left_sum = sum;
        }
    
        sum = 0;
        int right_sum = INT_MIN;
        for (int i = m + 1; i <= h; i++) {
            sum = sum + arr[i];
            if (sum > right_sum)
                right_sum = sum;
        }

        return maxs(left_sum + right_sum, left_sum, right_sum);
    }
 
int maxSubArraySum(int arr[], int l, int h)
{
    if (l == h)
        return arr[l];
     int m = (l + h) / 2;
    return maxs(maxSubArraySum(arr, l, m),
               maxSubArraySum(arr, m + 1, h),
               maxCrossSum(arr, l, m, h));
}

int main()
    {
        int n;
        printf("No. Of elements in your array: ");
        scanf("%d", &n);
        int arr[20];
        printf("Enter the array: ");
        for(int i=0;i<n;i++)
            {
                scanf("%d", &arr[i]);
            }

        int max_sum = maxSubArraySum (arr, 0, n-1);
        printf("Maximum contiguous sum is %d\n", max_sum);

    }