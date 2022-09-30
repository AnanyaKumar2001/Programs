#include<stdio.h>
// newtons iteration
double sqrt(double n, int k)
{
    if (k == 0)
        return 1;
    double d = sqrt(n, k-1);
    return 0.5 * (d + n/d);
};

// estimates square root with 10 iterations
double sqrt(double n)
{
    return sqrt(n, 10);
}

int main(int ar)
{
    double x = 1000;
    double d = sqrt(x);
    printf("sqrt %f = %f\n", x, d);
    return 0;
}