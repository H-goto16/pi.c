#include <stdio.h>

double Leibniz_pi(int n)
{
    double S = 0.0;
    for (int k = 0; k <= n; k++)
    {
        if (k % 2 == 0)
        {
            S += (double)1 / (2 * k + 1);
        }
        else
        {
            S -= (double)1 / (2 * k + 1);
        }
    }
    S = S * 4;
    return S;
}
int main(void)
{
    for (int n = 0; n <= 1000; n += 1)
    {
        printf("%f\n", Leibniz_pi(n));
    }
    return 0;
}