#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s,i;
    int a, b;
    double g, h;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        s = 0;
        scanf("%d %d %lf %lf", &a, &b, &g, &h);
        while(a <= b)
        {
            a *= (g / (double)100) + 1.0;
            b *= (h /(double) 100) + 1.0;
            s++;
            if (s > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (s<= 100)
            printf("%d anos.\n", s);
    }
    return 0;
}

