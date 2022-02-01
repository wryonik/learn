#include <iostream>
using namespace std;
void leftRotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
        
    }
    arr[n - 1] = temp;
}

void rotateByNtimes(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
    {
        leftRotateByOne(arr, n);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d;
    cout << "enter d = " ;
    cin >> d;
    rotateByNtimes(arr, d, 7);
    printArray(arr, 7);
    return 0;
}