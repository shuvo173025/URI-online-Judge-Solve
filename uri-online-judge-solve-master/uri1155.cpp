#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    double s=0,d=0;
    for(i=1; i<=100; i++)
    {
        d = (1/(double)i);
        s = s+d;
    }
    printf("%.2lf\n",s);

    return 0;
}
