#include <iostream>
using namespace std;
int main()
{
 int arr[10],n,max=0,min=0; 
 cout<<"Enter the size of the array :\n";
 cin>>n;
 cout<<"Enter the array elements :\n";
 for(int i=0;i<n;i++) 
 { 
 cin>>arr[i];
 } 
 max=arr[0];
 for (int i=0;i<n;i++) 
 { 
 if(arr[i]>max) 
 { 
 max=arr[i]; 
 }
 } 
 cout<<"The maximum number is : "<<max<<endl;
 min=arr[0];
 for (int i=0;i<n;i++) 
 { 
 if(arr[i]<min) 
 { 
 min=arr[i]; 
 }
 } 
 cout<<"The minimum number is : "<<min;
}
