#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,x2,y1,y2,p1,p2;
    double d;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    p1 = (x2-x1);
    p2 = (y2-y1);
    d = sqrt((p1*p1)+(p2*p2));
    printf("%.4lf\n",d);
    return 0;
}
