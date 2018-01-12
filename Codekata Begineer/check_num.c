#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%f",&n);
    if(n<0)
	    printf("Negative\n");
    else if(n>0)
	    printf("Positive\n");
    else if(n==0)
	    printf("Zero\n");
    else
	    printf("Invalid Input\n");
    return 0;
}
