#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
        {
            break;
        }
        else
        {
            for(i=1; i<a; i++)
            {
                printf("%d ",i);
            }
            printf("%d\n",a);
        }
    }
    return 0;
}
