#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,weight_sum,Media,exam,avg;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    weight_sum=2+3+4+1;
    Media=((2*N1)+(3*N2)+(4*N3)+(1*N4))/weight_sum;
    printf("Media: %.1f\n",Media);
    if(Media>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(Media<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f",&exam);
        printf("Nota do exame: %.1f\n",exam);
        avg=(exam+Media)/2;
        if(avg>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",avg);
    }
    return 0;
}

