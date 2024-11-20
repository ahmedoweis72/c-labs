#include <stdio.h>
#include <stdlib.h>

int main()
{
   int row =3,col=4;
   int arr[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
                    printf("Enter value of");
                    scanf("%d",&arr[i][j]);
        
    }
    }
    for(int i=0;i<row;i++){
        int sumRow =0;
        
        for(int j=0;j<col;j++){
            sumRow+=arr[i][j];
                
                
    }
    printf("%d\n",sumRow);

    }   for(int j=0;j<col;j++){
                int sumCol =0;
             for(int i=0;i<row;i++){
        
        
            sumCol+=arr[i][j];
                
                
    }
    printf("%d\n",sumCol/row);

    }



    return 0;
}
