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
    int w, h;
    int t = 0;
    while(cin>>w>>h && (w || h))
    {
        t++;
        vector<vector<int> > m2(h*2, vector<int>(w*2, 1));
        vector<vector<char> > m(h, vector<char>(w));
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                char c;
                cin>>c;
                m[i][j]=c;
                int ii = i*2;
                int jj = j*2;
                if(c=='/')
                {
                    m2[ii][jj+1] = 0;
                    m2[ii+1][jj] = 0;
                }else
                {
                    m2[ii][jj] = 0;
                    m2[ii+1][jj+1]=0;
                }
            }
        }

                vector<int>colors;
        colors.push_back(0);
        colors.push_back(1);
        int color = 1;
        map<int, bool> isCycle;
        isCycle[0] = false;
        isCycle[1] = false;
        map<int, int> colorCount;

        for(int i=0;i<h*2;i++)
        {
            for(int j=0;j<w*2;j++)
            {
                if(m2[i][j]==1)
                {
                    stack<pair<int, int> >s;
                    s.push(make_pair(i, j));
                    m2[i][j] = ++color;
                    colorCount[color] = 1;
                    isCycle[color] = true;
                    while(!s.empty())
                    {
                        pair<int, int> p = s.top();
                        int childAdded = false;
                        for(int dy=-1;dy<=1;dy++)
                        {
                            for(int dx=-1;dx<=1;dx++)
                            {
                                int ii=p.first+dy;
                                int jj=p.second+dx;
                                if(ii>=0 && ii<h*2 && jj>=0 && jj<w*2)
                                {
                                    if(m2[ii][jj]==1)
                                    {
                                    pair<int, int> pp = make_pair(ii, jj);
                                    if(dx==0 && dy==0)
                                        continue;
                                    int parity = (p.first+p.second)%2; // 0 == even, 1 == odd
                                    int dd = abs(dx+dy);
                                    if(dd == 1 || (!parity && dd!=2) || (parity && dd!=0))
                                    {
                                       s.push(pp);
                                       m2[ii][jj] = color;
                                       childAdded = true;
                                       colorCount[color]++;
                                       break;
                                    }
                                    }
                                }else
                                {
                                    isCycle[color]=false;
                                }
                            }
                            if(childAdded)
                                break;
                        }
                        if(!childAdded)
                            s.pop();
                    }
                }
            }
        }
        int cycles = 0;
        int length = 0;
        for(int i=0;i<color;i++)
        {
            if(isCycle[i])
            {
                cycles++;
                length = max(length, colorCount[i]);
            }
        }
        cout<<"Maze #"<<t<<":"<<endl;
        if(cycles)
            cout<<cycles<<" Cycles; the longest has length "<<length<<".";
        else
            cout<<"There are no cycles.";
        cout<<endl<<endl;


    }
    
    return 0;
}
