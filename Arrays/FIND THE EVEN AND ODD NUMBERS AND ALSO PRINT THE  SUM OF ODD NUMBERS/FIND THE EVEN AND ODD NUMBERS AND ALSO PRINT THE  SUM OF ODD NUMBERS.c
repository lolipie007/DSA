#include<stdio.h>
int main() 
{ 
 int arr[10],n,sum=0; 
 printf("Enter the length of the array :\n"); 
 scanf("%d",&n); 
 printf("Enter the elements of the array :\n"); 
 for(int i=0;i<n;i++) 
 { 
 scanf("%d",&arr[i]); 
 } 
 for(int i=0;i<n;i++) 
 { 
 if(arr[i]%2==0){ 
 printf("even number of the array: %d\n",arr[i]); 
 } 
 } 
 
 for(int i=0;i<n;i++) 
 { 
 if(arr[i]%2!=0){ 
 printf("odd number of the array: %d\n",arr[i]); 
 sum=sum+arr[i];
 } 
 } 
 printf("The sum of the odd numbers are : %d",sum);
}
