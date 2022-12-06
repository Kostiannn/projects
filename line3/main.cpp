#include <stdio.h>
#include <cmath>


int main()
{
    float alpha;
    float beta;

    printf("Enter alpha: ");
    scanf("%f", &alpha);

    printf("Enter beta: ");
    scanf("%f", &beta);

    float z1 = pow(cos(alpha) - sin(beta), 2) - pow(sin(alpha) - sin(beta), 2);
}