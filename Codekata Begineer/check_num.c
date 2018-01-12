#include <stdio.h>
int main()
{
    float n;
    printf("Enter a number: \n");
    scanf("%f",&n);
    (n < 0) ? printf("Negative\n") :
    (n > 0) ? printf("Positive\n") :
    (n == 0) ? printf("Zero\n") : printf("Invalid Input\n");
    return 0;
}
