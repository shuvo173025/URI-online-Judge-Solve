#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,b=1;
    double s=0,c=0;
    for(i=1; i<=39; i+=2)
    {
        c = i/(double)b;
        s = s+c;
        b = b*2;

    }
    printf("%.2lf\n",s);
    return 0;
}
