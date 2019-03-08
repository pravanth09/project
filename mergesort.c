#include<stdio.h>
#include<conio.h>
#include<time.h>
void Merge(int a[],int low,int mid,int high)
{
  int i,j,k,b[20];
  i=low;j=mid+1;k=low;
  while(i<=mid && j<=high)
  {
    if(a[i]<=a[j])
    b[k++]=a[i++];
    els
        b[k++]=a[j++];
    }
     while(i<=mid)
     b[k++]=a[i++];
     while(j<=high)
     b[k++]=a[j++];
     for(i<=low;k<=high;k++)
     a[k]=b[k];
     }
      void MergeSort(int a[],int low,int high)
      {
        int mid;
          if(low>=high)
          return;
          mid=(low+high)/2;
          MergeSort(a,low,mid);
          MergeSort(a,mid+1,high);
          Merge(a,low,mid,high);
      }
       void main()
       {
         int n,a[2000],k;
         clock_t st,et;
         double ts;
         //clrscr();
         printf("\n enter how many number:");
         scanf("%d",&n);
         printf("\nthe random number are:\n");
         for(k=1;k<=n;k++)
         {
           a[k]=rand();
           printf("%d\t",&a[k]);
         }
           st=clock();
           MergeSort(a,1,n);
           et=clock();
           ts=(double)(et-st)/CLOCKS_PER_SEC;
           printf("\n sorted number are:");
           for(k=1;k<=n;k++)
           printf("%d\t",&a[k]);
           printf("\n the time taken is %e",st);
           getch();
        }
