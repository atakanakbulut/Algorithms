#include <iostream>

/*
    Divide and conquer (parçala ve fethet) binary searchte kullanılan bir
    yöntemdir. algoritma analizinde çok kullanılan bir algoritmayı tahlil etmek veya
    yeni bir algoritma oluşturmak için kullanılır.

    Binary Search
    Sıralı(sorted) bir veri yapısı için kullanılır. Yani sıralı elemanlar olan

    Problemde aranacak uzayın tam orta noktasına bak
    Şayet aranan değer bulunduysa bit
    Şayet bakılan değer aranan değerden büyükse arama işlemini problem uzayının küçük elamanlarında devam ettir.
    Şayet bakılan değer arana değerden küçükse arama işlemini problem uzayının büyük elemanlarında devam ettir.
    Şayet bakılan aralık 1 veya daha küçükse aranan değer bulunamadı olarak bitir.
*/

int binarySearchAlgorithm(int val[], int size, int want)
{
    int middle, start=0, end=size-1;

    while (start <= end) {

        middle = (start + end) / 2;
        if(want == val[middle])
        {
            return middle;
        }
        else if(want > val[middle])
        {
            start = middle -1;
        }
        else
        {
            end = middle +1 ;
        }
    }
}

int main(int argc, char *argv[])
{
    int valuePool[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int val = binarySearchAlgorithm(valuePool, size, 6);
    std::cout << val+1 << std::endl;

    return 0;
}
