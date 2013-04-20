#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int N;
    while(cin>>N && N!=0)
    {
        bool bicolorable = true;
        vector<vector<bool> > adjMatrix(N, vector<bool>(N, false));
        int E;
        cin>>E;
        for(int e=0;e<E;e++)
        {
            int a, b;
            cin>>a>>b;
            adjMatrix[a][b]=adjMatrix[b][a]=true;
        }
        vector<bool> color(N, false);
        vector<bool> marked(N, false);
        for(int n=0;bicolorable && n<N;n++)
        {
            if(marked[n])
                continue;
            stack<int> s;
            s.push(n);
            marked[n] = true;
            while(!s.empty() && bicolorable)
            {
                int t=s.top();
                bool flag = false;
                for(int i=0;i<N && bicolorable;i++)
                {
                    if(i==t)
                        continue;
                    if(adjMatrix[t][i])
                    {
                        if(!marked[i])
                        {
                            color[i] = !color[t];
                            marked[i] = true;
                            s.push(i);
                            flag = true;
                        }else
                        {
                            if(color[i]==color[t])
                            {
                                bicolorable = false;
                                break;
                            }
                        }
                    }
                }
                if(!flag)
                s.pop();
            }
        }
        if(!bicolorable)
            cout<<"NOT ";
        cout<<"BICOLORABLE."<<endl;

    }
    return 0;
}
