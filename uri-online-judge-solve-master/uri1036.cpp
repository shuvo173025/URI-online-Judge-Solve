#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    double r1,r2;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=(b*b)-4*a*c;
    r1 = (-b+sqrt(d))/(2*a);
    r2 = (-b-sqrt(d))/(2*a);
    if(((b*b)-4*a*c)<0)
    {
        printf("Impossivel calcular\n");
    }
    else if(a==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }
    return 0;
}
