#include<iostream>
using namespace std;

static int count=0;
int binarysearch(int key,int size, int arr[])
{
  count++;
  int mid, low, high;
  low=0; count++; 
  high=size-1; count++;
  while(low<high)
	{   count++;
	    mid= high+low/2; count++;
	    if(arr[mid]>key)
        { count++;
          count++;
          high = mid-1;
		 
        }
	    else if( arr[mid]<key)
		{   count++;
			low=mid+1;
            count++;
		}
	else
		{  
			
           return mid;
		}
             
	}

return -1;
}
int main()
{ int arr[10] = {10,20,30};
  
  cout<<binarysearch(10,10,arr)<<endl;
  cout<<"Count:"<<count<<endl;
}
   
   
