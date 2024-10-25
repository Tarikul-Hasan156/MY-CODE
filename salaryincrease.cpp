#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    cin >> x;
    if (x >= 0 && x <= 400)
    {
        float salary;
        salary = (x * 15) / 100;
        printf("Novo salario: %.2f\n", salary + x);
        printf("Reajuste ganho: %.2f\n", salary);
        printf("Em percentual: 15 %%\n");
    }
    else if (x > 400 && x <= 800)
    {
        float salary;
        salary = (x * 12) / 100;
        printf("Novo salario: %.2f\n", salary + x);
        printf("Reajuste ganho: %.2f\n", salary);
        printf("Em percentual: 12 %%\n");
    }
    else if (x > 800 && x <= 1200)
    {
        float salary;
        salary = (x * 10) / 100;
        printf("Novo salario: %.2f\n", salary + x);
        printf("Reajuste ganho: %.2f\n", salary);
        printf("Em percentual: 10 %%\n");
    }
    else if (x > 1200 && x <= 2000)
    {
        float salary;
        salary = (x * 7) / 100;
        printf("Novo salario: %.2f\n", salary + x);
        printf("Reajuste ganho: %.2f\n", salary);
        printf("Em percentual: 7 %%\n");
    }
    else if (x > 2000)
    {
        float salary;
        salary = (x * 4) / 100;
        printf("Novo salario: %.2f\n", salary + x);
        printf("Reajuste ganho: %.2f\n", salary);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}