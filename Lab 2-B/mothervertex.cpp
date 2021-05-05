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

int mothervertex()
{  int v;
    for( int i =0 ; i <7; i ++)
    {   counter++;
        if( visted[i]==0)
        {  counter++;
            dfs(i);
            v=i;
            counter++;

        }
        counter++;
    }

    visted.assign(7,0); 
    dfs(v);

    for( int i =0; i<7;i++)
    {  counter++;
        if(visted[i]==0)
           return -1;
        
    }

    return  v;
}
int main()
{
    cout<<mothervertex()<<" ";
    cout << "count " << counter;
    
}
