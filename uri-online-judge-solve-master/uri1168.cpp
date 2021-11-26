#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,l,t,s;
    char c[100];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",&c);
        l = strlen(c);
        s=0;
        for(j=0; j<l; j++)
        {
            if(c[j]=='0')
                s+=6;
            else if(c[j]=='1')
                s+=2;
            else if(c[j]=='2')
                s+=5;
            else if(c[j]=='3')
                s+=5;
            else if(c[j]=='4')
                s+=4;
            else if(c[j]=='5')
                s+=5;
            else if(c[j]=='6')
                s+=6;
            else if(c[j]=='7')
                s+=3;
            else if(c[j]=='8')
                s+=7;
            else if(c[j]=='9')
                s+=6;
        }
        printf("%d leds\n",s);
    }
    return 0;
}
