#include<stdio.h>
 void reversearray(int arr[],int n){
    int s = 0,end = n-1;
    for(int i=0;i<n;i++);
      int temp = s;
             s = end;
           end = temp;
     s++;
     end++;       
  }
  
 int main() {
  int i,n;
    printf("Enter the Array Size");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the Array");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]); 
    }
    printf("Array before reversing\n");
    for(i=0;i<n;i++){
      printf("%d",arr[i]); 
    }  
    reversearray(arr,n);
    printf("\nArray after reversing\n");
    for(i=0;i<n;i++){
      printf("%d",arr[i]); 
    }
    printf("\n");
  return 0;
}    
