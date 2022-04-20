#include<stdio.h>
#include<climits>
#define max(a,b) (a>b ? a : b)

int maxSubarraySum ( int a [] , int n)
{
    int r = INT_MIN;
    for(int i = 1; i<=n;i++)
    {
        int sum = 0;
        for(int k = i; k<(n-1);k++)
            {
                sum=sum+a[i];
            } 
        r = max(r,sum);    
    }
    
    printf("%d", r);
    return 0;
}

int main()
    {
        int n;
        printf("No. Of elements in your array: ");
        scanf("%d", &n);
        int arr[n];
        printf("Enter the array: ");
        for(int i=0;i<n;i++)
            {
                scanf("%d", &arr[i]);
            }

        maxSubarraySum (arr , n);
    }