#include <iostream>
#include <stdlib.h>

/*
 Bu algoritma aynı bubble sort algoritması gibi bir arama algoritmasıdır.
diger algoritmalara ziyada cok basit bir algoritmadır. 

Calisma prensibi olarak liste üzerinde en kücük sayi bulunur. Ve bu bulunan sayi ile 
1. eleman yer degistirilir. daha sonra tüm liste tekrar aranarak en kücük eleman bulunarak
n+1 eleman ile yer degistirilir.

Bubble sort ile farkları, bubble sort 1 ve 2. elemanı karsılastırır selection sort ise ilk basta tüm
liste üzerinde gezinir.
*/

int size = 5;
int list[5] = { 2, 5, 1, 3, 4 }; 


void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;    
}

void swapf(int x, int y)
{
    int temp;
    temp = list[x];
    list[x] = list[y];
    list[y] = temp;
 
}

void selectionSort(int list[])
{
    int key;

    for(int i = 0; i < size; i++)
    {
        key = i;
 
        for(int j = i + 1; j < size; j++) 
        { 
	    if(list[key] > list[j])
            {
                key = j;
            }
        }
        swapf(i, key);
    }
}

void print(int a[], int size)
{
   for(int i =0; i < size; i++)
   {
       printf("%d ", a[i]);
   }
   printf("\n");
}

int main()
{

   selectionSort(list);
   print(list, 5);   


   return 0;
}

