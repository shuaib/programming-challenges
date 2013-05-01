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


vector<string> v;

int binsearch(vector<string> & v, string & s, int low, int high)
{
    if(low>=high)
        return -1;
    int mid = (low+high)/2;
    if(v[mid]==s){
        return mid;
    }
    if(v[mid]<s)
        return binsearch(v, s, mid+1, high);
    else
        return binsearch(v, s, low, mid);
}
int main()
{
    int mx = 0;
    vector<int> d;
    string s;
    int i=0;
    while(cin>>s) {
        v.push_back(s); 
        d.push_back(1);
        for(int j=0;j<v[i].size();j++) {
            //change each character to 25 of the other characters
            s = v[i];
            for(int k='a';k<='z';k++) {
                if(k==v[i][j])
                    continue;
                s[j] = k;
                if(s>=v[i])
                    continue;
                int ii = binsearch(v, s, 0, i);
                if(ii>=0)
                    d[i] = max(d[i], d[ii]+1);
            }
        }
        for(int k='a';k<='z';k++) {
            //insert each of the 26 characters at each position
            for(int j=0;j<=v[i].size();j++) {
                s = v[i];
                s.insert(j, 1, k);
                if(s>=v[i])
                    continue;
                int ii = binsearch(v, s, 0, i);
                if(ii>=0)
                    d[i] = max(d[i], d[ii]+1);
            }
        }
        for(int j=0;j<v[i].size();j++) {
            //erase any of the characters from string
            s = v[i];
            s.erase(j, 1);
            if(s.empty()||s>=v[i])
                continue;
            int ii = binsearch(v, s, 0, i);
            if(ii>=0)
                d[i] = max(d[i], d[ii]+1);

        }
        mx = max(mx, d[i]);
        i++;
    }
    cout<<mx<<endl;

    return 0;
}
