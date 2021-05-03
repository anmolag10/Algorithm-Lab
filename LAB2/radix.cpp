#include <iostream>
using namespace std;
int counter=0;
int getMax(int arr[], int n)
{  
    int mx = arr[0];
    counter++;
    for (int i = 1; i < n; i++)
      {   counter++;
          if (arr[i] > mx)
          {  mx = arr[i]; counter++;}
       
      }
      counter++;
    return mx;
}
 
void countSort(int arr[], int n, int exp)
{   counter++;
    int output[n]; 
    int i, count[10] = { 0 };
    counter++;

 
    for (i = 0; i < n; i++)
    {  counter++;
        count[(arr[i] / exp) % 10]++;
        counter++;
    }
    counter++;
 
    for (i = 1; i < 10; i++)
{   counter++;
        count[i] += count[i - 1];
        counter++;
}
counter++;

 

    for (i = n - 1; i >= 0; i--) {
        counter++;
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        counter++;
        count[(arr[i] / exp) % 10]--;
        counter++;
    }
    counter++;
 

    for (i = 0; i < n; i++)
    {   counter++;
        arr[i] = output[i];
        counter++;
    }
    counter++;
}
 

void radixsort(int arr[], int n)
{
    counter++;
    int m = getMax(arr, n);
 

    for (int exp = 1; m / exp > 0; exp *= 10){
        countSort(arr, n, exp);
        counter++;
        counter++;}
        counter++;
}
 

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
       { counter++;
           cout << arr[i] << " ";}
           counter++;
}
 

int main()
{
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    radixsort(arr, n);
    print(arr, n);
    cout<<endl;
    cout<<"Count "<<counter;
    return 0;
}
