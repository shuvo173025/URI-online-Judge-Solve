#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,N[100];
    int i;
    scanf("%lf",&a);
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,a);
        a/=2;
    }
    return 0;
}
