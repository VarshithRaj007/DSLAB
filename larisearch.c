#include<stdio.h>
  int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
      if(arr[i]==key){
        return i;
      }
    }
   return -1;
  }
  
  int main(){
   int i,key,n;
    printf("Enter the Array Size");
    scanf("%d",&n);
   int arr[n];
    printf("Enter the elements in the Array");
     for(i=0;i<n;i++){
       scanf("%d",&arr[i]);    
     }
    printf("Enter the element to search\n");
    scanf("%d",&key);
    int result = linearsearch(arr,n,key);
    if(result != -1)
      printf("The Element %d is in the index %d",key,result);  
    else
      printf("The Element doesnot exist");
  return 0;      
 } 
