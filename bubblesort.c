#include <stdio.h>

int main()
{
    int a[]={2,7,4,1,5,3};
    BubbleSort(a,6);
    for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void BubbleSort(int a[],int n)
{
    int i,k,temp=0;
    for(k=1;k<n-1;k++)
    {
        {
            for(i=0;i<n-1;i++)
            {
                if(a[i]>a[i+1])
                {
                   temp=a[i];
                   a[i]=a[i+1];
                   a[i+1]=temp;
                }
            }
        }
       
    }
}
