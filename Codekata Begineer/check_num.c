#include <stdio.h>
int main()
{
    float n;
    printf("Enter a number: \n");
    scanf("%f",&n);
    (n<0)?printf("negative numbe\n"):
    (n>0)?printf("%.2f is a positive number\n",n):printf("Input is Zero\n");
    return 0;
}
