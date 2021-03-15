#include<iostream>
using namespace std;
int selectionsort( int arr[], int size)
{
int key,j;
  for( int i=0;i<size-1;i++)
   {  int k =i;
     for( j=i+1; j<size; j++)
     {
      if(arr[j]<arr[k])
          k=j;
     }
   swap(arr[i],arr[k]);
   }
} 
void display( int arr[], int size)
{
  cout<<"Sorted Array"<<endl;
  for( int i=0; i<size;i++)
    cout<<arr[i]<<"\t";
}

int  arrinput(int arr[])
{ cout<<"Enter the size of the array"<<endl;
  int n;
  cin>> n;
  cout<<"Enter the elements of the array"<<endl;
  for(int i=0; i<n;i++)
   cin>>arr[i];
  return n;
}
int main()
{
  int arr[100];
  int size=arrinput(arr);
 selectionsort(arr,size);
 display(arr,size);
}
  
