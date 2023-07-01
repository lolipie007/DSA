#include <iostream>
using namespace std;
int main()
{
 int arr[10],n; 
 cout<<"Enter the size of the array :\n";
 cin>>n;
 cout<<"Enter the array elements :\n";
 for(int i=0;i<n;i++) 
 { 
 cin>>arr[i];
 } 
 for(int i=0;i<n;i++) 
 { 
 for(int j=i+1;j<n;j++)
 { 
 if(arr[i]==arr[j]) 
 {
 cout<<"duplicate elements are: \n"<<arr[i]<<endl; 
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
 cout<<"array after removing duplicates are: "<<arr[i]<<endl; 
 }
}
