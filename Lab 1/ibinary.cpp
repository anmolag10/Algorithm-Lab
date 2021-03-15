#include<iostream>
using namespace std;


int binarysearch(int key,int size, int arr[])
{
  int mid, low, high;
  low=0;
  high=size-1;
  while(low<high)
	{
	    mid= high+low/2;
	    if(arr[mid]==key)
		return mid;
	    else if( arr[mid]<key)
		{
			low=mid+1;
		}
	else
		{
			high = mid-1;
		}
             
	}


}
int main()
{ int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
  
  cout<<binarysearch(5,10,arr);
}
   
