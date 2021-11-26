#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",a);
    int b = a/100;
    a = a%100;
    printf("%d nota(s) de R$ 100,00\n",b);
    int d = a/50;
    a = a%50;
    printf("%d nota(s) de R$ 50,00\n",d);
    int e = a/20;
    a = a%20;
    printf("%d nota(s) de R$ 20,00\n",e);
    int f = a/10;
    a = a%10;
    printf("%d nota(s) de R$ 10,00\n",f);
    int g = a/5;
    a = a%5;
    printf("%d nota(s) de R$ 5,00\n",g);
    int h = a/2;
    a = a%2;
    printf("%d nota(s) de R$ 2,00\n",h);
    int i = a/1;
    a = a%1;
    printf("%d nota(s) de R$ 1,00\n",i);


    return 0;
}
