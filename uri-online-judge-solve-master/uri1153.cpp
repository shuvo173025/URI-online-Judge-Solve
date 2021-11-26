#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a=1;
    scanf("%d",&n);
    for(i = n; i >= 1; i--)
    {
        a = a * i;
    }
    printf("%5d\n",a);
    return 0;
}
