#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,j,s;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        s = 0;
        for(j=1; j<=a-1; j++)
        {
            if(a%j==0)
            {
                s = s+j;
            }
        }
        if(a==s)
        {
            printf("%d eh perfeito\n",a);
        }
        else
        {
            printf("%d nao eh perfeito\n",a);
        }
    }
    return 0;
}
