#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int d;
    cout << "enter d value = ";
    scanf("%d", &d);
    int temp[d];

    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int j = d; j < 7; j++)
    {
        arr[j - d] = arr[j];
    }
    for (int k = 0; k <= d; k++)
    {
        arr[7 - d + k] = temp[k];
    }
    for (int i = 0; i < 7; i++)
    {

        printf("%d ", arr[i]);
    }
    return 0;
}