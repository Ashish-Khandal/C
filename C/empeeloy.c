#include <stdio.h>
int main()
{
    float bs, hra, da, gs;
    printf("Enter your basic salary:-");
    scanf("%f", &bs);
    if (bs < 1500)
    {
        da = bs * 10.0 / 100.0;
        hra = bs * 90.0 / 100.0;
        gs = da + hra + bs;
        //#printf("%f$\n",gs);
    }
    else
    {
        hra = 500;
        da = bs * 98.0 / 100.0;
        gs = bs + hra + da;
        //#printf("%f$\n",gs);
    }
    printf("%f$\n", gs);
    return 0;
}