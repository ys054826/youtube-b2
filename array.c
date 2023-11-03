#include<stdio.h>

int main() 
{
  int a[20];
  int n;

  printf("enter the number");
  scanf("%d", &n);
  for(int i =0; i < n; i++)
  {
    
    scanf("%d",&a[i]);

  }
 printf("array elements are: ");
 for(int i=0; i< n; i++)
 {
    printf("%d",a[i]);
 }
  return 0;
}