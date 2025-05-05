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

    int x;
    scanf("%d", &x);

    int flag = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        while (j < n)
        {
            if (a[i] + a[j] == x)
            {
                flag = 1;
                printf("%d + %d = %d YES\n", a[i], a[j], a[i] + a[j]);
            }
            j++;
        }
    }

    if (!flag)
    {
        printf("NO");
    }

    return 0;
};