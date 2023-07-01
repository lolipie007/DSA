#include<stdio.h>
int main()
{
 int arr[10],n; 
 printf("Enter the size of the array :\n");
 scanf("%d",&n);
 printf("Enter the array elements :\n");
 for(int i=0;i<n;i++) 
 { 
 scanf("%d",&arr[i]);
 } 
 for(int i=0;i<n;i++) 
 { 
 for(int j=i+1;j<n;j++)
 { 
 if(arr[i]==arr[j]) 
 {
 printf("duplicate elements are: %d\n",arr[i]); 
 for(int k=j;k<n-1;k++) 
 { 
 arr[k]=arr[k+1]; 
 } 
 n--; 
 j--;
 } 
 } 
 }
 for(int i=0;i<n;i++) 
 { 
 printf("\narray after removing duplicates are: %d",arr[i]); 
 }
}
