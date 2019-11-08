#include<stdio.h>
#include<math.h>
void main()
{
int a[10],n,i,position;
printf("Enter the number of elements to be entered\n");
scanf("%d",&n);
printf("Enter elements in the array\n");
for (i = 0; i < n; i++)
{
  scanf("%d",&a[i]);
}
printf("Enter the position that has an element to be deleted\n");
scanf("%d",&position);
if (position>=n+1)
{
  printf("Deletion cannot be performed\n");
}
else
{
  for ( int k = position-1; k < n-1; k++)
  {
    a[k] = a[k+1];
  }
  for (i = 0; i < n; i++)
  {
    printf("%d",a[i]);
  }
}
}