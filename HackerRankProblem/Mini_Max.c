#include<stdio.h>
#include<malloc.h>
void miniMaxSum(int arr_count, int* arr) {
unsigned long long sum = 0L,max = 0L,min = 0L;
int i;
min = arr[0];
max = min;
sum = min;
for(i = 1;i<arr_count;i++){
    sum = sum + arr[i];
    if(arr[i] < min){
        min = arr[i];
    }
    if(arr[i] > max){
        max = arr[i];
    }

}
printf("Minimum Element in the List: %llu\n",min);
printf("Maxmum Element in the List: %llu\n",max);
printf("Minimum Sum = %llu ",(sum - max));//Minimum Sum
printf("Maximum Sum = %llu",(sum - min));//Maximum Sum

}
int main(int argc, char const *argv[])
{
    int n,i;
    printf("Enter the number of elements for array:\t");
    scanf("%d",&n);
    int *arr = malloc(n * sizeof(int));
    for(i = 0;i<n;i++){
        printf("Enter element no. %d:\t",i+1);
        scanf("%d",&arr[i]);
    }
    miniMaxSum(n,arr);
    free(arr);
    return 0;
}
