#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int y = n/365;
    n = n%365;
    int m = n/30;
    int d = n%30;
   printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);



    return 0;
}

