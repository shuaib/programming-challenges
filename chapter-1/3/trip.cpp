#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        double sum=0;
        long count=0;
        double money;
        vector<double> v;
        for(int i=0;i<n;i++)
        {
            count++;
            cin>>money;
            sum+=money;
            v.push_back(money);
        }
        double avg = sum/count;
        double presult=0;
        double nresult = 0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<avg)
                nresult+=(double)(long)((avg-v[i])*100.0);
            else if(v[i]>avg)
                presult+=(double)(long)((v[i]-avg)*100.0);

        }
        int result = max(presult, nresult);
        cout<<setprecision(2);
        cout<<fixed;
        cout<<"$"<<(double)result/100<<endl;
    }
    return 0;
}
