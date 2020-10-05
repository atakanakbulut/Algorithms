#include <iostream>


/*
   DFS Algoritması açılımı ile depth first search algoritmasıdır.
   Stack veri yapısı kullanılır
   Gidebildigi yere kadar gider(pop kullanılır)
   Derin arama yapar BFS den farkı sadece eninde arama yapmaz

Graf örnegi
GRAF.png
*/

// komşuluk matrisi
int adjacentMatris[6][6] = {
    {0,1,1,0,0,0},
    {1,0,0,1,0,0},
    {1,0,0,1,0,0},
    {0,1,1,0,1,0},
    {0,0,0,1,0,1},
    {0,0,0,0,1,0}
};

bool visited[6];

void DFSAlgorithm(int root, bool visited[])
{
    visited[root] = true;
    printf("%d ", root);

    for(int i=0;i<6;i++)
    {
        if(adjacentMatris[root][i] == 1 && visited[i] == false)
        {
            DFSAlgorithm(i, visited);
        }
    }
}

int main()
{
    for(int i =0;i<6;i++)
    {
         visited[i]=false;
    }

    DFSAlgorithm(3, visited);

    return 0;
}
