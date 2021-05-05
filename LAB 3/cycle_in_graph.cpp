#include <iostream>
#include <vector>
using namespace std;
int counter = 0;
vector<vector<int>> adcmax = {{1, 2}, {3}, {}, {}, {1}, {6, 2}, {0, 4}};
vector<int> visted(7, 0);
int is_cyclic_util(int v, int parent)
{
    visted[v] = 1;
    counter++;
    for (auto i = adcmax[v].begin(); i != adcmax[v].end(); i++)
    {
        counter++;
        if (!visted[*i])
        {
            if (is_cyclic_util(*i, v))
                return 1;

            else if (*i != parent)
                return 1;
        }
    }
    counter++;

    return -1;
}

int isCyclic()
{
    for (int u = 0; u < 7; u++)
    {
        counter++;
        if (!visted[u])
            if (is_cyclic_util(u, -1))
                return 1;
    }
    counter++;
    return -1;
}

int main()
{
    cout << "Is graph cyclic " << (bool)isCyclic() << endl;
    cout << "count " << counter;
}
