#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e;
    double ave,exm;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    ave = ((a*2)+(b*3)+(c*4)+(d*1))/10;
    printf("Media: %.1lf\n",ave);
    if(ave<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (ave>=5.0&&ave<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&e);
        printf("Nota do exame: %.1lf\n",e);
        exm = (ave+e)/2;
        if(exm>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        if(exm<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",exm);

    }
    else
    {
        printf("Aluno aprovado.\n");
    }


    return 0;
}
