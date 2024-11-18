#include <stdio.h>

int main(){
   
    unsigned char choise=0;
   printf("Choise from menu\n");
   printf("1-Choise 1\n");
   printf("2-Choise 2\n");
   printf("3-Choise 3\n");
   scanf("%d",&choise);
   switch (choise)
   {
   case 1:
    printf("Choise 1\n");
    printf("exit\n");
    break; 
    case 2:
    printf("Choise 2\n");
    printf("exit\n");
    break;
    case 3:
    printf("Choise 3\n");
    printf("exit\n");
    break;
   
   default:
    break;
   }
 
    return 0;
}
