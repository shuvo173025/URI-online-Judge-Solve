#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s=0,i,temp=0;
    scanf("%d %d",&a,&b);
    while(b<=a)
        scanf("%d",&b);
              for(i=a; i<=b; i++)
    {
        s = s+i;
        if(s<=b)
            {
                temp++;
            }
            else
            {
                break;
            }
        }
    printf("%d\n",temp+1);
    return 0;
}
