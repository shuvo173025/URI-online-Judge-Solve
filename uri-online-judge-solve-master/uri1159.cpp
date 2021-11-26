#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i,s;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        else if(x%2==1)
        {
            x++;
            s=0;
            for(i=1; i<=5; i++)
            {
                s = s+x;
                x = x+2;
            }
        }
        else
        {
            s=0;
            for(i=1; i<=5; i++)
            {
                s = s+x;
                x = x+2;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}
