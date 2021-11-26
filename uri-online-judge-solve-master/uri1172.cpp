#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    int i,j,k;
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0; j<10; j++)
    {
        if(arr[j]<=0)
        {
            arr[j] = 1;
        }
    }
    for(k=0; k<10;k++)
    {
        printf("X[%d] = %d\n",k,arr[k]);
    }
return 0;
}
