#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int h = (n/60)/60;
    int a = n-(h*60*60);
    int m = a/60;
    int s = n%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
