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
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        vector<int> start, end;
        vector<vector<int> > bad;
        map<vector<int>, bool> seen;
        int x;
        for(int i=0;i<4;i++)
        {
            cin>>x;
            start.push_back(x);
        }
        for(int i=0;i<4;i++)
        {
            cin>>x;
            end.push_back(x);
        }
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            vector<int> v;
            for(int i=0;i<4;i++)
            {
                cin>>x;
                v.push_back(x);
            }
            bad.push_back(v);
        }
        queue<pair<vector<int>, int> >q;
        q.push(make_pair(start, 0));
        seen[start] = true;
        pair<vector<int>, int>p; 
        bool found = false;
        while(!q.empty())
        {
            p = q.front();
            q.pop();
            if(p.first==end)
            {
                found = true;
                break;
            }else if(find(bad.begin(), bad.end(), p.first)!=bad.end())
            {
                continue;
            }else {
                for(int j=0;j<4;j++)
                {
                    vector<int> a, b;
                    a = p.first;
                    b = p.first;
                    int ii = a[j]+1;
                    int jj = a[j]-1;
                    a[j] = ii<10?ii:0;
                    b[j] = jj>=0?jj:9;
                    if(!seen[a])
                    {
                        q.push(make_pair(a, p.second+1));
                        seen[a] = true;
                    }
                    if(!seen[b])
                    {
                        q.push(make_pair(b, p.second+1));
                        seen[b] = true;
                    }
                }
            }
        }
        cout<<(!found?-1:p.second)<<endl;
        
    }

    return 0;
}
