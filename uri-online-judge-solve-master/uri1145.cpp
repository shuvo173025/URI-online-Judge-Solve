#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,c=1,d;
    scanf("%d %d",&a,&b);
    if(b%a)
        d = (b/a)+1;
    else
        d = b/a;
    for(i=1; i<=d; i++)
    {
        for(j=1; j<=a; j++)
        {
            if(c<=b)
            {
                if(c==b)
                    printf("%d",c);
                else
                    printf("%d ",c);
                c++;
            }
            else
            {
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
