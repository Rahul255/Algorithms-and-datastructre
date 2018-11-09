#include <stdio.h>
#include <conio.h>
void main()
{
  int i,n,a[100],temp;
  printf("enter the array limit/n");
  scanf("%d",n);
  printf("enter the array values/n");
  scanf("%d",&a[[i]);
  for(i=0;i<n;i++)
  {
    if(a[i]>a[i+1])
    {
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
  }
  printf("%d",a[i]);
}
