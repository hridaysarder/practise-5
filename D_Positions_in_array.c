#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x=0;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 10)
        {
            x=arr[i];
            printf("A[%d] = %d\n", i, x);
        }
    }
    return 0;
}