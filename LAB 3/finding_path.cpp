#include <iostream>
#include <vector>
using namespace std;
int counter = 0;
vector<vector<int>> adcmax = {{1,2},{3},{},{},{1},{6,2},{0,4}};
vector<int> visted(7, 0);                                                              
                                                                                            
void dfs(int n)
{
    if (visted[n] == 0)
    { counter++;
       //cout<<n<<" ";
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
int finding_a_path( int u, int v)
{
    dfs(u);
    if(visted[v]!=0)
        return 1;
    else
       return 0;
    
    return -1;
}
int main()
{
    cout<<" If path exists: between v(5, 1)"<<(bool)finding_a_path(5,1);
    cout << "count " << counter;
    
}
