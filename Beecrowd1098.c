#include <stdio.h>

int main(void)
{
    float I;
    int J;

    for(I = 0; I <= 2.01; I += 0.2)
    {
        for(J = 1; J <= 3; J++)
        {
            if((int)(I * 10) % 10 == 0)
                printf("I=%d J=%d\n", (int)I, (int)I + J);
            else
                printf("I=%.1f J=%.1f\n", I, I + J);
        }
    }

    return 0;
}
