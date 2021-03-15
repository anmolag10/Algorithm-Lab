#include<iostream>
using namespace std;
int insertionsort( int arr[], int size)
{
int key,j;
  for( int i=1;i<size;i++)
   { 
	key=arr[i];
        j=i-1;
  while(j>=0 && arr[j]>key)
   {
       arr[j+1]=arr[j];
       j=j-1;
   }
arr[j+1]=key;
  
   }
} 
void display( int arr[], int size)
{
  for( int i=0; i<size;i++)
    cout<<arr[i]<<"\t";
}

int main()
{
  int arr[]={65,2,473,91,290,43,0,8};
 insertionsort(arr,8);
 display(arr,8);
}
  
