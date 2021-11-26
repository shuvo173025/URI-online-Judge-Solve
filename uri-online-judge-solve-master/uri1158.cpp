#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,s,j;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d",&a,&b);
        if(a%2==0)
        {
            s=0;
            a++;
            for(j=1; j<=b; j++)
            {
                s = s+a;
                a = a+2;
            }
            printf("%d\n",s);
        }
        else
        {
            s=0;
            for(j=1; j<=b; j++)
            {
                s = s+a;
                a = a+2;
            }
            printf("%d\n",s);
        }
    }
    return 0;
}
