#include<iostream>
using namespace std;


int rbinarysearch(int arr[], int low, int high,int key)
{ 
  int mid=(low+high)/2;
  if(low<high) {
     
  if ( arr[mid]==key)
	return mid;
 
  else if ( arr[mid]<key)
      rbinarysearch(arr,mid+1,high,key);
  else 
   {rbinarysearch(arr,low,mid-1,key); }
    
                }
}
int main()
{ int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
  
  cout<<rbinarysearch(arr,0,9,5);
}
   
