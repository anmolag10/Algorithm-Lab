
#include <iostream>
 
using namespace std;
int count=0;

void heapify(int arr[], int n, int i)
{   count++;
    int largest = i; 
    count++;
    int l = 2 * i + 1; 
    count++;
    int r = 2 * i + 2; 
    count++;
 
 
    if (l < n && arr[l] > arr[largest])
       {   count++;
           largest = l; 
           count++;
       }
 
    if (r < n && arr[r] > arr[largest])
    {   count++;
        largest = r;
        count++;
    }
   
    if (largest != i) {
        count++;
        swap(arr[i], arr[largest]);
        count++;
        count++;
 
    
        heapify(arr, n, largest);
    }
}
 

void heapSort(int arr[], int n)
{
    
    for (int i = n / 2 - 1; i >= 0; i--)
    {  count++;
        heapify(arr, n, i);
        
    }
    count++;
 
    
    for (int i = n - 1; i > 0; i--) {
    
      count++;
        swap(arr[0], arr[i]);
        count++;
 
       
        heapify(arr, i, 0);
        
    }
    count++;
}
 

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
 

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    heapSort(arr, n);
 
    cout << "Sorted array is \n";
    printArray(arr, n);
    cout<<endl<<"Count "<<count<<endl;
}