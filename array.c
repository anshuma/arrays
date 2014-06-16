#include<stdio.h>

int main()
{
  int a[]={1,0,0,1,0,0,1,0};
  int i=0 ,j=7;
  int k;
  while(i<j)
  {
    while(a[i]==0)
      i++;
    while(a[j]==1)
      j--;
      if(i<j)
      {
        k=a[i];
        a[i]=a[j];
        a[j]=k;
        i++;
        j--;
      }
  }
  
  for(i=0;i<8;i++)
  {
    printf("%d ",a[i]);
  }
}
