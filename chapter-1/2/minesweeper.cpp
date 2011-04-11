#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	int test=1;
	char c;
	vector<vector<vector<int> > >  results;
	while(cin>>n>>m)
	{
		if(n==0 && m==0)
			break;
		vector<vector<char> > field(n, vector<char>(m));

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				
				cin>>field[i][j];
			}
		}

		vector<vector<int> > output(n, vector<int>(m));

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(field[i][j]=='*')
				{
					output[i][j]=-1;

				}
				else
				{
					int sum=0;
					for(int k=i-1;k<=i+1;k++)
					{
						if(k<0 || k==n)
							continue;
						for(int l=j-1;l<=j+1;l++)
						{
							if(l<0 || l==m)
								continue;
							if(field[k][l]=='*')
								sum++;

						}
					}
					output[i][j]=sum;
				}
			}
		}
		results.push_back(output);
	}

	for(int t=0;t<results.size();t++)
	{
		vector<vector<int > > output;
		output=results[t];
		cout<<"Field #"<<t+1<<":"<<endl;
		int o;
		int n=output.size();
		int m=output[0].size();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
					
					o=output[i][j];
					if(o==-1)
						cout<<"*";
					else
						cout<<o;
			}
			cout<<endl;
		}
		if((t+1)!=results.size())
			cout<<endl;
					
	}
	return 0;
}
