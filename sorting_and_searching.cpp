#include <iostream>

using namespace std;

int *bubbleSort(int list[], int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
    return list;
}

int *selectionSort(int *list, int n)
{

    for (int i = 0; i < n; i++)
    {
        int smallestIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (list[smallestIndex] > list[j])
                smallestIndex = j;
        }
        if (smallestIndex != i)
        {
            int temp = list[smallestIndex];
            list[smallestIndex] = list[i];
            list[i] = temp;
        }
    }
    return list;
}

int *insertionSort(int *list, int n)
{

    for (int i = 1; i < n; i++)
    {
        int temp = list[i];

        for (int j = i; j > 0 && list[j - 1] > list[j]; j--)
        {
            list[j] = list[j - 1];
            list[j - 1] = temp;
        }
    }
    return list;
}

int linearSearch(int *list, int key, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (key == list[i])
            return i;
    }
    return -1;
}

int binarySearch(int *list, int key, int n)
{
    int left = 0, right = n, mid;

    while (left < right)
    {
        mid = (left + right) / 2;
        if (key == list[mid])
            return mid;
        else if (key > list[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

void display(int list[], int n)
{
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << list[i] << ", ";
    }

    cout << "\n";
}

int main()
{
    int dataList[] = {76, 4, 8, 90, 1, 23, 67, 79, 98, 10, 1};
    size_t dataLength = sizeof(dataList) / sizeof(*dataList);

    cout << "before bubble Sort";
    display(dataList, dataLength);

    cout << "After Insertion Sort";
    int *sortedList = insertionSort(dataList, dataLength);
    display(sortedList, dataLength);

    cout << "index of 4 is: " << binarySearch(sortedList, 98, dataLength) << endl;
}