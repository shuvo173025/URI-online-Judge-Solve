#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N[1000];
    int n,i,x=0;
    scanf("%d",&n);
    while(x<1000)
    {
        for(i=0; i<n; i++)
        {
            printf("N[%d] = %d\n",x,i);
            x++;
            if(x==1000)
                break;
        }
    }
    return 0;
}
