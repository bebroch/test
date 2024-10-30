#include <iostream>
using namespace std;

const int segments = 3000;

class HashTable
{

}

int
rand(int min, int max)
{
    return min + rand() % (max - min + 1);
}

int main()
{

    for (size_t i = 0; i < 100; i++)
    {
        cout << i << ", ";
    }

    system("pause");
}