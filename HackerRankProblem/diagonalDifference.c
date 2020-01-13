#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int diagonalDifference(int arr_rows, int arr_columns, int arr[3][3]) {
int sum1 = 0,sum2 = 0,result = 0,i,j;
int temp_c = arr_columns - 1;
for(i = 0;i<arr_rows;i++){
    for(j = 0;j<arr_columns;j++){
        if(i == j){
            sum1 = sum1 + (*(*(arr + i) + j));
        }
        if(j == temp_c){
            sum2 = sum2 + (*(*(arr + i) + j));
            temp_c -= 1;
        }
    }
}
printf("%d\n",sum1);
printf("%d\n",sum2);
printf("%d\n",temp_c);
printf("%d\n",(*(*(arr + 0)+0)));
result = abs(sum1 - sum2);
return result;
}
int main(int argc, char const *argv[])
{
  int n = 3;
  int arr[n][n];
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  int result = diagonalDifference(n,n,arr);
  printf("%d\n",result);
  return 0;
}
