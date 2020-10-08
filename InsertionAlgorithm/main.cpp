#include <iostream>
#include <stdlib.h>

/*
 *  Bu algoritmada araya sokma sıralamasıdır. temel olayı
 *  sayının dogru pozisyona yerlestirilmesidir. bu işlem yapılırken sürekli 
 *  kaydirma islemi gerceklesir.
 * 
 * */

int size = 8;
int array[8] = { 6, 5, 3, 1, 8, 7, 2, 4 };

void printList(int array[])
{
  for(int i =0; i<size; i++)
	  printf("%d", array[i]);

  printf("\n");
}

void insertionSort(int arr[], int n)
{
   int i,j, value;

   for (i = 1; i < n; i++)
   {
       value = arr[i];
       j = i-1;
       printf("+ %d -1 ->  %d \n", i, j);


       while (j >= 0 && arr[j] > value)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = value;
   }
}

int main()
{
   printList(array);
   insertionSort(array, 8);
   printList(array);
   return 0;
}
