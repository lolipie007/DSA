#include<iostream> 
using namespace std; 
int main() 
{ 
 int arr[10],n,sum=0; 
 cout<<"Enter the length of the array :"<<endl; 
 cin>>n; 
 cout<<"Enter the elements of the array :"<<endl; 
 for(int i=0;i<n;i++) 
 { 
 cin>>arr[i]; 
 } 
 for(int i=0;i<n;i++) 
 { 
 if(arr[i]%2==0){ 
 cout<<"even number of the array: "<<arr[i]<<endl; 
 } 
 } 
 
 for(int i=0;i<n;i++) 
 { 
 if(arr[i]%2!=0){ 
 cout<<"odd number of the array: "<<arr[i]<<endl; 
 } 
 } 
 cout<<"The sum of the odd numbers are : "<<sum;
}
