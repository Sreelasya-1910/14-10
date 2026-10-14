 #include <stdio.h>

typedef struct
{
    int n;
    float a[21];
} poly;

int main()
{
    poly p, d;
    float x, value = 0, power;
    int i, j;

    printf("Enter degree of polynomial: ");
    scanf("%d", &p.n);

    if (p.n < 0 || p.n > 20)
    {
        printf("Invalid degree!\n");
        return 1;
    }

    printf("Enter coefficients from a0 to a%d:\n", p.n);

    for (i = 0; i <= p.n; i++)
    {
        printf("a%d = ", i);
        scanf("%f", &p.a[i]);
    }

    printf("Enter value of x: ");
    scanf("%f", &x);

    // Calculate P(x)
    for (i = 0; i <= p.n; i++)
    {
        power = 1;

        for (j = 0; j < i; j++)
            power = power * x;

        value = value + p.a[i] * power;
    }

    printf("P(%.2f) = %.2f\n", x, value);

    // Calculate derivative
    if (p.n == 0)
    {
        d.n = 0;
        d.a[0] = 0;
    }
    else
    {
        d.n = p.n - 1;

        for (i = 1; i <= p.n; i++)
            d.a[i - 1] = i * p.a[i];
    }

    // Print derivative
    printf("Derivative: P'(x) = ");

    for (i = 0; i <= d.n; i++)
    {
        printf("%.2fx^%d", d.a[i], i);

        if (i < d.n)
            printf(" + ");
    }

    printf("\n");

    return 0;
}
