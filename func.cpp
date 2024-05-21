#include "head.h"

template <class T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
void mySort(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int max = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] > arr[max])
            {
                max = j;
            }
        }
        if (max != i)
        {
            mySwap(arr[i], arr[max]);
        }
    }
}

template <class T>
void printArray(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void test01()
{
    char charArr[] = "badcfe";
    int num = sizeof(charArr) / sizeof(charArr[0]);
    mySort(charArr, num);
    printArray(charArr, num);
}

void test02()
{
    int intArr[] = {7,5,1,3,9,2,4,6,8};
    int num = sizeof(intArr) / sizeof(intArr[0]);
    mySort(intArr, num);
    printArray(intArr, num);
}
