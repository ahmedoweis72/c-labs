#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

#include "conio.h"

#define BLUE "\[\033[0;34m\]"
#define RESET "\[\033[0m\]"
#define clear() printf("\033[H\033[J")
#define UP 65
#define DOWN 66
#define RIGHT 67
#define LEFT 68
#define EXTENDKEY 27
#define EXTRAEXTENDKEY 91
#define ENTERKEY 10
#define BACKSPACE 127
#define ESC 27
#define HOME 72
#define END 70
#define ONE 49
#define ZERO 48
#define TERMINATOR '\0'

typedef struct Employee {
    char name[10];
    int code;
    int netSalary;
} Employee;



int main()
{

    Employee employees[SIZE] = {{employees->code=0}};
   char  ch,flag=1,option=0,posi=0,chkKEy=0,exit=0;;
    while(flag==1){

int id=0;
        switch(option){
        case 0:clear();
                    printf("\t\t%schoise option up&down %s\n\n\n", BLUE, RESET);
                    printf(" \t\t\t1-Display \n\n\n");
                    printf("\t\t\t2-new\n\n\n");
                    printf("\t\t\t3-Modify\n\n\n");
                    printf("\t\t\t4-exit\n\n\n");
                    break;
         case 1:clear();
                    printf("\t\tchoise option up&down \n\n\n");
                    printf("\t\t\t%s1-Display%s\n\n\n", BLUE, RESET);
                    printf("\t\t\t2-new\n\n\n");
                    printf("\t\t\t3-Modify\n\n\n");
                    printf("\t\t\t4-exit\n\n\n");
                    break;

         case 2:clear();
                    printf("\t\tchoise option up&down \n\n\n");
                    printf("\t\t\t1-Display\n\n\n");
                    printf("\t\t\t%s2-new%s\n\n\n", BLUE, RESET);
                    printf("\t\t\t3-Modify\n\n\n");
                    printf("\t\t\t4-exit\n\n\n");
                    break;
        case 3:clear();
                    printf("\t\tchoise option up&down \n\n\n");
                    printf("\t\t\t1-Display\n\n\n");
                    printf("\t\t\t2-new\n\n\n");
                    printf("\t\t\t3%s-Modify%s\n\n\n", BLUE, RESET);
                    printf("\t\t\t4-exit\n\n\n");


                    break;
        case 4:clear();
                    printf("\t\tchoise option up&down \n\n\n");
                    printf("\t\t\t1-Display\n\n\n");
                    printf("\t\t\t2-new\n\n\n");
                    printf("\t\t\t3-Modify\n\n\n");
                    printf("\t\t\t%s4-exit%s\n\n\n", BLUE, RESET);


                    break;


        case 5:clear();


                        int new = 1,chkConstrain,newEmployee=0;

                        while (new==1)
                            {
                                    
                                for (int i = 0; i < SIZE; i++){
                                    Employee e;
                                if (employees[i].code==0){
                                e.code=i+1;
                                printf("Enter employee name: \n");
                                scanf("%s",e.name);
                                printf("Enter employee NetSalary: \n");
                                chkConstrain=scanf("%d",&e.netSalary);
                                 if (chkConstrain!=1||e.netSalary<0)
                            {
                                getchar() != '\n';
                                printf("Invalid input. Please enter a number.\n");
                            }
                            employees[i]=e;
                            printf("Employee saved\n");
                                i=SIZE;

                            }


                            }
                            for(int i=0;i<SIZE;i++){
                                        if(employees[i].code==0){
                                        printf("Please Add Data to read");
                                        i=SIZE;
                                        }else{
                                            printf("The Employee ID is =%d \n",employees[i].code);
                                            printf("The Employee Name is =%s \n",employees[i].name);
                                            printf("The Employee NetSalary is =%d \n",employees[i].netSalary);
                                        }
                                    }
                                    printf("If you want to add another employee, press 1. If not, press 0.\n");
                                    scanf("%d",&newEmployee);
                                    if(newEmployee==0){
                                        new=0;
                                        exit=1;
                                        posi=2;
                                        option=7;
                                        
                                        
                                        }
                                        else
                                        {
                                            new=1;
                                            }
                                    

                                    
                            }



                                break;
                case 6 :clear();

                    for(int i=0;i<SIZE;i++){
                        if(employees[i].code==0){
                            printf("Please Add Data to read%d",i);
                        i=SIZE;
                        }else{
                            printf("The Employee ID is =%d \n",employees[i].code);
                            printf("The Employee Name is =%s \n",employees[i].name);
                            printf("The Employee NetSalary is =%d \n",employees[i].netSalary);
                        }
                    }
                    break;
            case 7:clear();

                        if(posi==1){
                                printf("click backspace to back\n");
                                printf(" \t\t\n\n\n\t%sDisplay%s\n\n\n ",BLUE,RESET);
                        }else if(posi==2) {
                                printf("click backspace or Esc to back\n");
                                printf(" \t\t\n\n\n\t%snew%s\n\n\n ",BLUE,RESET);
                                exit=0;
                        }else if(posi==4) {
                                printf("click enter to exit\n");
                                printf("\t\t\t exit \n\n\n");
                                printf("See you");
                                flag=0;
                        }else if(posi==3) {
                                printf("chose option Record to edit\n");
                                printf("%s\t\t\t Modify \n\n\n%s",BLUE,RESET);

                                
                        }

                    break;
            case 8:clear();
                            
                        printf("%schose option Record to edit%s\n",BLUE,RESET);
                        for (int i = 0; i < SIZE; i++)
                        {
                            if (employees[i].code!=0)
                            {
                                printf("Employee Id %d \n",employees[i].code);
                            }
                            
                        }
                        if (employees[0].code==0)
                        {
                            printf("No Data\n");
                           option=7;
                           posi=3;
                           
                            

                        }else{
                        
                        printf("Enter the Employee ID to edit\n");
                        scanf("%d",&id);}
                        if (id>0)
                        {
                            id=id-1;
                        }
                        break;
            case 9:clear();
                            char name[10];
                            int netSalary,editAgain=0;
                            printf("%schose option Record to edit%s\n", BLUE, RESET);
                            printf("Employee Id %d \n", employees[id].code);
                            printf("Employee Name %s \n", employees[id].name);
                            printf("Employee NetSalary %d \n", employees[id].netSalary);
                            printf("Enter the Employee Name to edit\n");
                            scanf("%s", name); 
                            printf("Enter the Employee NetSalary to edit\n");
                            scanf("%d", &netSalary);
                            strcpy(employees[id].name, name); 
                            employees[id].netSalary = netSalary;
                            printf("Edited\n");
                            printf("If you want to edit again press 1\n");
                            scanf("%d", &editAgain);
                            if (editAgain==1)
                            {
                                option=9;
                            }else 
                            
                            {   
                                option=8;
                            }
                            
                            
                        
                            
                            

                        
                        break;  
      
        default:clear();
                    printf("%schoise option  up&down %s\n", BLUE, RESET);
                    printf("\t\t\t1-Display\n\n\n");
                    printf("\t\t\t2-new\n\n\n");
                    printf("\t\t\t3-Modifay\n\n\n");
                    printf("\t\t\t4-exit\n\n\n");
                    break;
                   




         }


             ch=getch();
            
         if(ch == EXTENDKEY){
         if(kbhit()==0&&ch==ESC)
         { 
            option=posi;
            posi=0;
         

            }else{

               ch=getch();
               ch=getch();

            if(posi==0){
            if(ch==DOWN||ch==RIGHT){
             option+=1;
             ch=EXTRAEXTENDKEY;
              if(option>4){
            option=1;
         }
            }



             else if (ch==UP||ch==LEFT){
             option-=1;
             ch=EXTRAEXTENDKEY;
               if(option==0){
            option=4;
         }
             }else if(ch==HOME){
            option=1;
         }else if(ch==END){
                        option=4;
         }

             }

            }
         }
         else if (ch==ENTERKEY&&posi==0)
         {  posi=option;
            option=7;


         }else if(ch==ENTERKEY&&posi==1){
            option=6;
         }
         else if(ch==ENTERKEY&&posi==2&&option==7)
         {  if (exit==0)
         {
            option=5;
         }
         

            
         }
         else if (ch==ZERO&&option==5){
            option=7;
            posi=2;
                    }
         else if (ch==ONE&&option==5){

            option=5;
         }else if (ch==BACKSPACE){
            option=posi;
            posi=0;
         }else if (ch==ENTERKEY&&posi==3)
         {  posi=option;
            option=8;
         } else if (ch==ENTERKEY&&option==8&&employees[0].code!=0)
         {
            option=9;
         }
         
         
         
        
         


    }




    return 0;
}
