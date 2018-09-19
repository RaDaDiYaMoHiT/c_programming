#include<stdio.h>
void mergesort();
void merge();
int main()
{
    int i,j,n,a[50];
    printf("enter the number of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
void mergesort(int a[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,mid+1,h);
    }
}
void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];
    int i,j,k;
    i=i1;
    j=i2;
    k=0;
    while(i<=j1 && j<=j2)
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=j1)
      temp[k++]=a[i++];
    while(j<=j2)
      temp[k++]=a[j++];
    for(i=i1,j=0;i<=j2;i++,j++)
      a[i]=temp[j];
}
