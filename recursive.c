#include <stdio.h>
#include <stdlib.h>


int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int number;
    printf("Enter Number for fact =");
    scanf("%d",&number);
    printf("%d",factorial(number));

    return 0;
}