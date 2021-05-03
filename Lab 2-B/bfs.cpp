#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int counter=0;
vector<vector<int>> adcmax= { {0,0,0,0},{0,0,1,1},{0,1,0,1},{0,1,1,0}};   //  1_____2
vector<int> visted(4,0);                                                 //    \   /
                                                                         //      3                                       
queue<int> q;
void bfs( int n )
{ int temp;
    counter++;
    cout<<n<<" ";
    counter++;
    q.push(n);
    visted[n]++;
    counter++;


    while(!q.empty())
    {  counter++;
        temp=q.front();
        counter++;
        q.pop();
        counter++;
        for(int i =1; i<=3;i++)
        {counter++;
            if(adcmax[temp][i]==1 && visted[i]==0)
             {  counter++;
                 cout<<i<<" ";
                 counter++;
                 visted[i]++;
                 counter++;
                 q.push(i);
                 counter++;

             
             }


        }
        counter++;
    }
    counter++;
}


int main()
{
    bfs(1);
    cout<<endl<<"Count: "<<counter;
}
