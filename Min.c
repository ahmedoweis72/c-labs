#include <stdio.h>
#include <stdlib.h>

int main()
{
   int myNumbers[] = {250, 50, 75, 100,125,1500};
 int size=sizeof(myNumbers)/sizeof(myNumbers[0]);

int min=myNumbers[0];
for (int i = 0; i < size-1; i++)
{
    if(myNumbers[i]<min)
    {
        min=myNumbers[i];
    }


}
 printf("%d",min);

    return 0;
}
