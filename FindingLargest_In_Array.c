#include<stdio.h>  
void main(){
    int array[20],n,i,largest=0,sec_largest = 0;
    printf("Enter the number of an Array:\t");
    scanf("%d",&n);
    printf("Enter the elements of an Array:\t");
    for(i = 0;i<n;++i){
        scanf("%d",&array[i]);
    }
    largest = array[0];
    sec_largest = array[1];
    for(i = 0;i<n;++i){
        if(array[i]>largest){
            sec_largest = largest;
            largest = array[i];
        }else if (array[i]>sec_largest)
        {
            sec_largest = array[i];
        }
        
        
    }
printf("largest = %d, second largest = %d",largest,sec_largest); 
}
    