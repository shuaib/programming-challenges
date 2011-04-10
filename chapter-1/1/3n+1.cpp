#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int i, j;
    while(cin>>i>>j)
    {
        int a, b;
        a=i;
        b=j;

        if(b<a)
            swap(a, b);
        int max=0;
        for(int k=a;k<=b;k++)
        {
            int n=k;
            int counter=1;
            while(n!=1)
            {
                if(n%2==0)
                {
                    n=n/2;
                }
                else
                {
                    n=(n*3)+1;
                }
                counter++;
            }
            if(counter>max)
                max=counter;

        }
        cout<<i<<" "<<j<<" "<<max<<endl;
    }
    return 0;
}
