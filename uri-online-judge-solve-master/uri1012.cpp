#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,pi = 3.14159;
    double tri,cir,tra,qua,ret;
    scanf("%lf %lf %lf",&a,&b,&c);
    tri = .5*a*c;
    cir = pi*c*c;
    tra = (.5*(a+b))*c;
    qua = b*b;
    ret = a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cir,tra,qua,ret);
    return 0;
}
