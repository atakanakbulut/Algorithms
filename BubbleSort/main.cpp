#include <iostream>

/*
Bubble Sort Algoritması
Bu sıralama algoritması bir listede kücükten büyüge veya büyükten kücüge sıralama
gerçekleştirmek için yapılır. Çalışma mekanizması ilk başka 1. eleman ile 2. eleman karşılaştırılır.
eger 1. eleman 2. elemandan büyük ise yer degiştirilir. daha sonra 2. eleman ve 3. eleman aynı işlem yapılır.
*/

void bubbleSortAlgorithm(int arr[], int size)
{
    for(int i = 0; i < size -1 ; i++)
    {
        for(int j = 0; j < size -1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printValues(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << i+1 << " value " << arr[i] << std::endl;
    }
}

int main(int argc, char *argv[])
{
    int array[] = { 4,6,1,3,5,9,7,2,8,0};
    int arraySize = 10;
    printValues(array, arraySize);
    bubbleSortAlgorithm(array, arraySize);
    printValues(array, arraySize);


    return 0;
}
