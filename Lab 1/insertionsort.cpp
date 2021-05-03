
#include <iostream>
using namespace std;
int count = 0;
int insertionsort(int arr[], int size)
{
  int key, j;
  for (int i = 1; i < size; i++)
  {
    count++;
    key = arr[i];
    count++;
    j = i - 1;
    count++;
    while (j >= 0 && arr[j] > key)
    {
      count++;
      count++;
      arr[j + 1] = arr[j];
      count++;
      j = j - 1;
      count++;
    }
    count++;
    arr[j + 1] = key;
    count++;
  }
  count++;
  return 0;
}
void display(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    cout << arr[i] << "\t";

}

int main()
{
  int arr[] = {65, 2, 473, 91, 290, 43, 0, 8};
  insertionsort(arr, 8);
  display(arr, 8);
  cout << endl;
  cout << "Count: " << count;
}
