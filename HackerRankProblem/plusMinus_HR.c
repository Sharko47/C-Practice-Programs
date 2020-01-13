#include<stdio.h>
void plusMinus(int arr_count, int* arr) {
    int i;
    double pos_count = 0,neg_count=0,zero_count = 0,n = arr_count;
    for(i = 0;i<arr_count;i++){
      int p = *(arr + i);
        if(p > 0){
            pos_count++;
        }
        else if (p < 0) {
            neg_count++;
        }
        else{
            zero_count++;
        }
    }
    printf("%lf\n",(double)(pos_count/n));
    printf("%lf\n",(double)(neg_count/n));
    printf("%lf\n",(double)(zero_count/n));

}
int main(int argc, char const *argv[])
{
  int n = 8;
  int arr[n+1];
  for(int i = 0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  plusMinus(n,arr);
  return 0;
}
