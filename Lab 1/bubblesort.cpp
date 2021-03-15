#include<iostream>
using namespace std;
int bubblesort( int arr[], int size)
{
int temp;
  for( int i=0;i<size-1;i++)
   { 
	 for(int j=i+1; j<size;j++)
       {
          if(arr[i]>arr[j])
           {
             temp= arr[j];
             arr[j]=arr[i];
             arr[i]=temp;
           }
		}
  
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
 bubblesort(arr,8);
 display(arr,8);
}
  
