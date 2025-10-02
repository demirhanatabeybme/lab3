/*
John Wallis, British mathematician developed the following expression to compute the constant π:

π   2·2   4·4   6·6   8·8
─ = ─── · ─── · ─── · ─── · …
2   1·3   3·5   5·7   7·9

Identify the repeating pattern in the formula, and write a program to evaluate it up to the first n factors (n is obtained from the user). Test the program with n=10, n=100 and n=1000 settings!
*/

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    double i = 0;
    double pi = 1;
    while (n--)
    {
        i += 2;
        pi *= (i * i) / ((i - 1) * (i + 1));
    }
    printf("%lf\n", pi * 2);
    return 0;
}
