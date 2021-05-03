#include<iostream>
using namespace std;

int count=0;

int rbinarysearch(int arr[], int low, int high,int key)
{ 
  int mid=(low+high)/2; count++;
  if(low<high) { count++;
     
  if ( arr[mid]==key)
  { count++;
	return mid;
  }
 
  else if ( arr[mid]<key)
  {
      rbinarysearch(arr,mid+1,high,key);
      count++;
  }
  else 
   {rbinarysearch(arr,low,mid-1,key); 
    count++;}

    
                }
}
int main()
{ int arr[10] = { 10,20,30};
  
  cout<<rbinarysearch(arr,0,2,20)<<endl;
  cout<<"Count: "<<count;
}
