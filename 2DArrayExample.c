#include<stdio.h>  
void printArray(int a[4][4]){
    int i,j;
  printf("\n Printing the elements ....\n");     
    for(i=0;i<4;i++)    
    {    
        printf("\n");    
        for (j=0;j<4;j++)    
        {    
            printf("%d\t",a[i][j]);    
        }    
    }
}
void main(){
    int array[4][4],i,j;
    for(i = 0;i<4;++i){
        for(j = 0;j<4;++j){
            printf("Enter Elements for Array[%d][%d]\t",i,j);
            scanf("%d",&array[i][j]);
        }
    }

    printArray(array);
    
}
    