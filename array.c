#include <stdio.h>

int main(){
 


     

 int myNumbers[] = {25, 50, 75, 100,125,150};
 int size=sizeof(myNumbers)/sizeof(myNumbers[0]);
 int row,column;


 printf("Enter numberOfRow :");
 scanf("%d",&row);

 if (size % row == 0 ){
            column = size / row ;
        } 
   else {
            printf("Rows should be divisible by size ");
        }
            
 
 for (int i = 0; i <row ;i++)
 {
   for (int j = 0; i <column ; i++)
   {
      
            int index = (i * column )+ j;
                    printf("%d \n",myNumbers[index]);
   }
   
 }
 


    return 0;
}
