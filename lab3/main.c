#include <stdio.h>
#include "conio.h"

#define BLUE "\[\033[0;34m\]"
#define RESET "\[\033[0m\]"
#define clear() printf("\033[H\033[J")
int main()
{
//down66
//left68
//up65
//right67
    char  ch,flag=1,option=0,posi;
    while(flag==1){


        switch(option){
         case 1:clear();
                    printf("choise option \n");
                    printf("\t\t\t%s1-Display%s\n\n\n", BLUE, RESET);
                    printf("\t\t\t2-new\n\n\n");
                    printf("\t\t\t3-exit\n\n\n");
                    break;

         case 2:clear();
                    printf("choise option \n");
                    printf("\t\t\t1-Display\n\n\n");
                    printf("\t\t\t%s2-new%s\n\n\n", BLUE, RESET);
                    printf("\t\t\t3-exit\n\n\n");
                    break;
        case 3:clear();
                    printf("choise option \n");
                    printf("\t\t\t1-Display\n\n\n");
                    printf("\t\t\t2-new\n\n\n");
                    printf("\t\t\t%s3-exit%s\n\n\n", BLUE, RESET);


                    break;
        case 4:clear();
                        if(posi==1){
                                printf("\t\t\tDisplay\n\n\n");
                        }else if(posi==2) {
                                printf("\t\t\tnew\n\n\n");
                        }else if(posi==3) {
                                printf("\t\t\texit\n\n\n");
                                flag=0;
                        }

                    break;

        default:clear();
                    printf("%schoise option %s\n", BLUE, RESET);
                    printf("\t\t\t1-Display\n\n\n");
                    printf("\t\t\t2-new\n\n\n");
                    printf("\t\t\t3-exit\n\n\n");
                    break;




         }


             ch=getch();
             printf("%d",ch);
         if(ch == 27){
            printf("extended Key");
             ch=getch();
             ch=getch();


            if(posi==0){
            if(ch==66){
             option+=1;
             ch=91;
              if(option>3){
            option=1;
         }
             }
             else if (ch==65){
             option-=1;
             ch=91;
               if(option==0){
            option=3;
         }
             }

            }
         }
         else if (ch==10)
         {  posi=option;
            option=4;


         }else if (ch==127){
            option=5;
            posi=0;
         }


    }




    return 0;
}
