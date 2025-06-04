#include<stdio.h>
int main(){
  int arr[10],i,num;
  printf("Enter the no. of elements: ");
  scanf("%d",&num);
  printf("\nEnter the array elements..");
  for(i=0;i<num;i++){
     printf("\narr[%d} = ",i);
     scanf("%d",&arr[i]);
  }
  printf("\nThe array elements are..");
  for(i=0;i<num;i++){
  printf("%d ",arr[i]);
  }
return 0;
}
