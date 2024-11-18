#include <stdio.h>

int main(){
   
   int number1=0;
   while (number1<=100)
   {
    int number2=0;
    printf("Enter Number\n");
    scanf(" %d",&number2);
    number1+=number2;
    printf("Number is=%d \n",number1);
   }
   
    return 0;
}
