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
    int t = 1;
    int N, R;
    while(cin>>N>>R && N>0 && R>0)
    {
        cout<<"Scenario #"<<t<<endl;
        t++;
        cout<<"Minimum Number of Trips = ";
        vector<vector<int> > vv(N, vector<int>(N, -999999));
        vector<bool> marked(N, false);
        for(int i=0;i<R;i++)
        {
            int x, y, c;
            cin>>x>>y>>c;
            x--;y--;
            vv[x][y]=vv[y][x]=c-1;
        }

        int S, D, T;
        cin>>S>>D>>T;
        S--;D--;
        for(int k=0;k<N;k++)
        {
            for(int i=0;i<N;i++)
            {
                for(int j=0;j<N;j++)
                {
                    vv[i][j] = max(vv[i][j], min(vv[i][k], vv[k][j]));
                }
            }
        }
        cout<<ceil((double)T/vv[S][D])<<endl<<endl;
    }

    return 0;
}
