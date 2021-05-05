#include <iostream>
#include <vector>
using namespace std;
int counter = 0;
vector<vector<int>> adcmax = {{3,2},{0},{1},{4},{}};
vector<int> visted(5, 0);                                                              
                                                                                            
void dfs(int n)
{
    if (visted[n] == 0)
    { counter++;
        cout << n << " ";
        counter++;

        visted[n]++;
    
        for (int u = 0; u <adcmax[n].size(); u++)
        {
            counter++;
            if (visted[adcmax[n][u]] == 0)
            {  counter++;
                dfs(adcmax[n][u]);
              
            
            }
        }
        counter++;


    }
}

int main()
{
    dfs(1);
    cout << "count " << counter;
    
}
