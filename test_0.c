#include <stdio.h>
double Ksq_func(int n)
{
    int i = 1, q = 1;
    double a[5];
    while (q == 1)
    {
        if (i * i <= n && (i + 1) * (i + 1) >= n)
        {
            a[0] = i;
            q = 0;
        }
        else
        {
            i += 1;
        }
    }
    for (i = 0; i < 4; i++)
    {
        a[i + 1] = (n / a[i] + a[i]) * (0.5);
    }
    return a[i];
}
int main()
{
    int x0;
    scanf("%d", &x0);
    if (x0 == 0)
    {
        printf("0\' ksq is 0\n");
    }
    if (x0 < 0)
    {
        printf("Please enter a positive integer");
    }
    if (x0 > 0)
    {
        printf("x0\'ksq is:%lf", Ksq_func(x0));
    }

    return 0;
}