#include <stdio.h>

int main()
{
    int n, val = 1;
    scanf("%d", &n);

    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= val; k++)
        {
            printf("%d ", k);
        }

        printf("\n");
        val++;
        space--;
    }

    return 0;
};


// int main()
// {
//     int n, star = 1;
//     scanf("%d", &n);

//     int space = n - 1;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }

//         for (int k = 1; k <= star; k++)
//         {
//             printf("*");
//         }

//         printf("\n");
//         star++;
//         space--;
//     }

//     return 0;
// };