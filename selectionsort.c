#include <stdio.h>

int main()
{
    int a[]={2,7,4,1,5,3};
   
    SelectionSort(a,6);
    for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void SelectionSort(int a[],int n)
{
     int i,d,j,temp;
    for(i=0;i<n-1;i++)
    {
        d=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[d])
            {
                d=j;
            }
        }
        temp=a[i];
        a[i]=a[d];
        a[d]=temp;
    
    }
    
}
