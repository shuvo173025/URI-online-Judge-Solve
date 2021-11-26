#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,m;
    int a;
    scanf("%f",&n);
    a = (int)n;
    printf("NOTAS:\n");
    int b = a/100;
    m = n-a;
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

    printf("MOEDAS:\n");
    int i = a/1;
    a = a%1;
    printf("%d moeda(s) de R$ 1,00\n",i);
    int j = m/(0.50);
    m = fmod(m,.50);
    printf("%d moeda(s) de R$ 0.50\n",j);
    int k = m/(0.25);
    m = fmod(m,.25);
    printf("%d moeda(s) de R$ 0.25\n",k);
    int l = m/(0.10);
    m = fmod(m,.10);
    printf("%d moeda(s) de R$ 0.10\n",l);
    int o = m/(0.05);
    m = fmod(m,.05);
    printf("%d moeda(s) de R$ 0.05\n",o);
    int p = m/(0.01);
    m = fmod(m,.01);
    printf("%d moeda(s) de R$ 0.01\n",p);
    return 0;

}
