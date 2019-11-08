#include<stdio.h>  
void main(){
    int array[20],n,temp,i,j,iteration = 1;
    register int count = 0;
    printf("Enter the number of an Array:\t");
    scanf("%d",&n);
    printf("Enter the elements of an Array:\t");
    for(i = 0;i<n;++i){
        scanf("%d",&array[i]);
    }
    printf("Before Sorting the elements of an Array:\n");
    for(i = 0;i<n;++i){
        printf("%d\t",array[i]);
    }
    printf("\n");
    for(;count<n;++count){
        for(i = count+1;i<n;++i){
            if(array[i]<array[count]){
                temp = array[count];
                array[count] = array[i];
                array[i] = temp;
            }
        }
        printf("\n");
        printf(" \"%d\" Iteration Array Result:\t\t",iteration);
        for(j = 0;j<n;++j){
            printf("%d\t",array[j]);
        }
        ++iteration;
    }
    printf("\n");
    printf("Final result After Sorting\n");
    for(i = 0;i<n;++i){
        printf("%d\t",array[i]);
    }
}
    