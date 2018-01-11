#include <stdio.h>
int main()
{
    float n;
    printf("Enter a number: \n");
    scanf("%f",&n);
    (n<0)?printf("Negative\n"):
    (n>0)?printf("Positive\n",n):printf("Zero\n");
    return 0;
}
