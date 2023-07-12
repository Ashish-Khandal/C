// #include <stdio.h>
// #include <conio.h>
// //! error.....................................error...
// void main()
// {
//     int n, r, sum1, sum2, x, n1;
//     sum1 = 0;
//     sum2 = 0;
//     printf("Enter your number:- ");
//     scanf("%d", &n);
//     int arr;
//     // n1 = n;
//     // while (n1 > 0)
//     // {
//     //     n1 = n1 / 10;
//     //     sum1 = sum1 + 1;
//     // }
//     // if (sum1 == 1)
//     // {
//     //     x = r;
//     // }
//     // else if (sum1 == 2)
//     // {
//     //     x = r * r;
//     // }
//     // else if (sum1 == 3)
//     // {
//     //     x = r * r * r;
//     // }
//     // else if (sum1 == 4)
//     // {
//     //     x = r * r * r * r;
//     // }
//     // else
//     // {
//     //     printf("Your number is very large.");
//     // }

//     for (int i = 100; i <= n; i++)
//     {
//             arr = i;
//         sum2 = 0;
//         for (int j = arr; j > 0; j)
//         {
//             int r = i % 10;
//             int x = r * r * r;
//             sum2 = sum2 + x;
//             j = j / 10;
//         }
//         if (sum2 == i)
//         {
//             printf("%d", sum2);
//         }
//         else
//         {
//             continue;
//         }
//     }
//     // int n, x, r, m, sum, y;
//     // printf("Enter your number:- ");
//     // scanf("%d", &n);
//     // for (int i = 1; i < n; i++)
//     // {
//     //     m = i;
//     //     sum = 0;
//     //     while (m > 0)
//     //     {
//     //         r = m % 10;
//     //         x = r ;
//     //         sum = sum + x;
//     //         m = m / 10;
//     //         y = sum;
//     //     }
//     //     if (y == i)
//     //     {
//     //         printf("%d ", sum);
//     //     }
//     //     else
//     //     {
//     //         continue;
//     //     }
//     // }
// }

#include<stdio.h>
#include<math.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int n,sum,i,t,a;
    printf("\n\n\nThe Armstrong numbers in between 1 to 500 are : \n\n\n");

    for(i = 1; i <= 500; i++)
    {
        t = i;  // as we need to retain the original number
        sum = 0;
        while(t != 0)
        {
            a = t%10;
            sum += a*a*a;
            t = t/10;
        }

        if(sum == i)
        printf("\n\t\t\t%d", i);
    }

    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}