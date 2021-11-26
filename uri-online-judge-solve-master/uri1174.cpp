#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A[100];
    int i,j;
    for(i=0; i<4; i++)
    {
        scanf("%lf",&A[i]);
    }
    for(j=0; j<4; j++)
    {
        if(A[j]<=10)
        {
            printf("A[%d] = %.1lf\n",j,A[j]);
        }
    }
    return 0;
}
