#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y,i,s=0;
    scanf("%d %d", &x, &y);
    while(y<=0)
        scanf("%d", &y);
    for(i=1; i<=y; i++)
    {
        s = s+x;
        x++;
    }
    printf("%d\n",s);

    return 0;
}
