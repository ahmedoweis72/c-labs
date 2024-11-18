#include <stdio.h>
#include <stdlib.h>

int main()
{
   int myNumbers[] = {250, 50, 75, 100,125,1500};
 int size=sizeof(myNumbers)/sizeof(myNumbers[0]);

int max=myNumbers[0];
for (int i = 0; i < size-1; i++)
{
    
    if (max<myNumbers[i+1])
    {
        max=myNumbers[i+1];

    }

}
 printf("%d",max);

    return 0;
}
