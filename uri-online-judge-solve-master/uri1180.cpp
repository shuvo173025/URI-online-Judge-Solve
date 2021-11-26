#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,temp;
    scanf("%d",&n);
    int x[n],y[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
        y[i]=x[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(x[j]>x[j+1])
            {
                x[j]=temp;
                temp=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    printf("Menor valor: %d\n",x[0]);
    l = x[0];
    for(k=0; k<n; k++)
    {
        if(y[k]==l)
        {
            printf("Posicao: %d\n",k);
            break;
        }
    }
    return 0;
}
