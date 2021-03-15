#include<iostream>
using namespace std;
int selectionsort( int arr[], int size)
{
int count =0;
int key,j;
  for( int i=0;i<size-1;i++)
   { count ++; count ++;
    int k =i;
count ++;
     for( j=i+1; j<size; j++)
     {   count ++; count ++;
      if(arr[j]<arr[k])
          k=j; count ++;
     }
   swap(arr[i],arr[k]); count ++; count ++; count ++;
   }

return count;
} 
void display( int arr[], int size)
{
  cout<<"Sorted Array"<<endl;
  for( int i=0; i<size;i++)
    cout<<arr[i]<<"\t";
  cout<<endl;
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
 cout<<"Total Steps:"<<selectionsort(arr,size)<<endl;
 display(arr,size);
}
