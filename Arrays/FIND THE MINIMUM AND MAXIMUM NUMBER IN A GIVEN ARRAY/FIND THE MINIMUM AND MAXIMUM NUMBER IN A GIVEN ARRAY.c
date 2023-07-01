#include<stdio.h>
int main()
{
 int arr[10],n,max=0,min=0; 
 printf("Enter the size of the array:\n");
 scanf("%d",&n); 
 for(int i=0;i<n;i++) 
 { 
 scanf("%d",&arr[i]);
 } 
 max=arr[0];
 for (int i=0;i<n;i++) 
 { 
 if(arr[i]>max) 
 { 
 max=arr[i]; 
 }
 } 
 printf("The maximum number is : %d\n",max);
 min=arr[0];
 for (int i=0;i<n;i++) 
 { 
 if(arr[i]<min) 
 { 
 min=arr[i]; 
 }
 } 
 printf("The minimum number is : %d",min);
}
