#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <stack>

using namespace std;
bool cmp(pair<pair<int, int>, int> p1, pair<pair<int, int>, int> p2)
{
    if(p1.first.first<p2.first.first)
        return true;
    return false;
}
int main()
{
    int w, iq;
    vector<pair<pair<int, int>, int> > v; // to hold ((weight, iq), index_in_input)
    int i=1;
    while(cin>>w>>iq)
    {
        v.push_back(make_pair(make_pair(w, iq), i));
        i++;
    }
    sort(v.begin(), v.end(), cmp); //sort by weight
    vector<int> dp(v.size(), 1);
    vector<int> s(v.size());
    for(int i=0;i<s.size();i++)
        s[i] = i;
    int max = 1;
    int maxi=0;
    int lmaxi = 0;
    /*
     * In the following loop, find the longest decreasing subsequence on IQ,
     * such that for each successive member, weight is more then the previous
     * one. Also storing index of maximum length found thus far, and the choice
     * made to get till there.
     */
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(v[i].first.first>v[j].first.first && v[i].first.second<v[j].first.second && dp[i]<=dp[j])
            {
                dp[i] = dp[j]+1;
                s[i] = j;
                if(dp[i]>max)
                {
                    max = dp[i];
                    maxi = i;
                }
            }
        }
    }
    cout<<max<<endl;
    stack<int> st;
    /*
     * Push choices made to get to the largest subsquence in a stack. And print
     * them in reverse.
     */
    for(int i=0;i<max;i++)
    {
       st.push(v[maxi].second);
       maxi = s[maxi];
    }
    for(int i=0;i<max;i++)
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
