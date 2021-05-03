 #include<iostream>
using namespace std;
int count=0;
int bubblesort( int arr[], int size)
{
int temp;
  for( int i=0;i<size-1;i++)
   {  count++;
	 for(int j=i+1; j<size;j++)
       { count++;
          if(arr[i]>arr[j])
           {  count++;
             temp= arr[j];
             count++;
             arr[j]=arr[i];
             count++;
             arr[i]=temp;
             count++;
           }

		}
        count++;
  
   }
   count++;

   return 0;
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
 cout<<endl<<"Count: "<<count<<endl;
}
  
