#include <iostream>

using namespace std;

void bubble_sort(int arr[],int tam)
{
    int i = 0,e = i + 1,temp;
    while(i < tam)
    {
        while(e < tam-1)
        {
            if(arr[i] < arr[e])
            {
                temp = arr[e];
                arr[e] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int suma(int a,int b)
{
    int res = a + b;
    return res;
}

int main()
{
    int arreglo[] = {5,4,3,6,1,2};
    //cout << arreglo[] << endl;
    void (*fp)(int[],int);
    fp = bubble_sort;
    (*fp)(arreglo,6);
    for (int i = 0;i < 6;i++)
        cout << arreglo[i] << endl;
    return 0;
}
