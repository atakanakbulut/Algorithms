#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <list>
#include <queue>

using namespace std;

/*
 * BFS Algoritması graflar veya agaclar üzerinde arama/gezinme işlemi yapan bir algoritmadır.
 * Bu uygulamada komşuluk matrisi üzerinden ilerler.
*/

int adjacencyMatris[6][6] = {
    {0,1,1,0,0,0},
    {1,0,1,0,0,0},
    {1,0,0,1,0,0},
    {0,1,1,0,1,0},
    {0,0,0,1,0,1},
    {0,0,0,0,0,1}
};

void printMatris()
{
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
            std::cout << adjacencyMatris[i][j] << " ";

        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[])
{

    int visited[100] = {0};
    int n=6;
    std::queue<int>que;

    // print matris
    printMatris();

    int startNode = 0;
    que.push(startNode);

    while(!que.empty())
    {
        int curNode = que.front();

        std::cout << curNode << " ";
        visited[curNode] = 1;

        for(int nextNode = 0; nextNode < n; nextNode++)
        {
            if(adjacencyMatris[curNode][nextNode] == 1 && visited[nextNode] == 0)
            {
                visited[nextNode] = 1;
                que.push(nextNode);
            }
        }
        que.pop();
    }

    return 0;
}
