#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,b=0;
    double a;
    while(1)
    {
        scanf("%d",&n);
        if(n<0)
        {
            break;
        }
        else
        {
            s = s+n;
            b++;
        }
    }
    a = s/(double)b;
    printf("%.2lf\n",a);
    return 0;
}
