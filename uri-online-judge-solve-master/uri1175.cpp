#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N[20];
    int i,j,x=0;
    for(i=0; i<20; i++)
    {
        scanf("%d",&N[i]);
    }
    for(j=19;j>=0;j--){
        printf("N[%d] = %d\n",x,N[j]);
        x++;
    }
    return 0;
}
