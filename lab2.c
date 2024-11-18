#include<stdio.h>


 
   int main()
        {
         int size=0,row=0,col=0;
        printf("Enter Size Of Square\n");
        scanf(" %d",&size);
        int totalsize=size*size;
        row =0;
        col=(size)/2;
          for(int i=1;i<=totalsize; i++)
          {
            printf("\033[%d;%dH", row  + 2, col * 4 + 3);
                  printf("%d",i);
                  row-=1; col+=1;
                  if(i % size== 0){
                   row+=2;
                   
                }
                  if(row == -1)
                   row = size-1;
                  if(col == size)
                   col = 0;
                   fflush(stdout);
                   sleep(1);
                 
          }
          return 0;
        }