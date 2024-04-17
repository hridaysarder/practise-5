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
    int ans = -1;
    int x;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            ans = i;
            break;
        }
    }
    printf("%d", ans);
    return 0;
}