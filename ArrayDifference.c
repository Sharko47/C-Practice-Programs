#include <stdio.h>
#include <malloc.h>
int *difference(int[], int);
void PrintDiffArray(int*,int);
int main(int argc, char const *argv[])
{
    //Program to find 1st,2nd & 3rd Difference of a given Array with N Elements.
    int n;
    scanf("%d",&n);
    int *arr,*d1, *d2, *d3, i;
    arr = malloc(n*sizeof(int));
    printf("Enter elements in the Array\n");
    for(i = 0;i<n;i++){
        scanf("%d",(arr+i));
    }
    d1 = malloc((n - 1) * sizeof(int));
    d2 = malloc((n - 2) * sizeof(int));
    d3 = malloc((n - 3) * sizeof(int));

    d1 = difference(arr, (n - 1));
    d2 = difference(d1, n - 2);
    d3 = difference(d2, n - 3);
    PrintDiffArray(d1, n - 1);
    printf("\n");
    PrintDiffArray(d2, n - 2);
    printf("\n");
    PrintDiffArray(d3, n - 3);
    free(arr);
    free(d1);
    free(d2);
    free(d3);
    return 0;
}
int *difference(int *arr, int n)
{
    int *diff, i;
    diff = malloc(n * sizeof(int));
    for (i = 0; i <= n; i++)
    {
        if (i == n)
        {
            continue;
        }
        *(diff + i) = (*(arr + i + 1)) - *(arr+i);
    }
    return diff;
}
void PrintDiffArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", *(arr + i));
    }
}