#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = n;

    for (int i = 1; i <= n; i++)
    {
        int j = 1;
        while (j <= star)
        {
            printf("*");
            j++;
        }

        printf("\n");
        star--;
    }

    return 0;
};

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = n; i > 0; i--)
//     {
//         int j = i;
//         while (j > 0)
//         {
//             printf("*");
//             j--;
//         }

//         printf("\n");
//     }

//     return 0;
// };