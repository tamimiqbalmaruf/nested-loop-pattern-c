#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    };

    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        while (j < n)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    };

    return 0;
};