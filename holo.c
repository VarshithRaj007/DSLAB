#include<stdio.h>
 int binarysearch(int arr[],int l,int r,int x){
   if(l<=r){
    int m=l+(r-l)/2;
     if(arr[m]==x)
       return m;
     if(arr[m]>x)
       return binarysearch(arr,l,m-1,x);
       return binarysearch(arr,m+1,r,x);
    }
    return -1;
  }
      int main(){
      int x,n,i;
      printf("Enter the array size");
      scanf("%d",&n);
      int arr[n];
      printf("Enter the elements in the array");
      for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
      }
      printf("Enter the element to search for");
      scanf("%d",&x);
      int result = binarysearch(arr,0,n-1,x);
      (result==-1)?printf("Element not found")
                  :printf("The element is in the index %d",result);
      return 0;
   }               
