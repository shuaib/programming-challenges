#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

	int n;
	while(cin>>n)
	{if(n>0)
		{
		vector<int> nums;
		for (int i=0;i<n;i++)
		{
			int num;
			cin>>num;
			nums.push_back(num);
		}
		vector<int> diffs;
		for(int i=0;i<nums.size()-1;i++)
		{
			int diff=abs(nums[i+1]-nums[i]);
			diffs.push_back(diff);
		}
		sort(diffs.begin(), diffs.end());
		bool jolly=true;
		for(int i=0;i<diffs.size();i++)
		{
			//cout<<diffs[i]<<" ";
			if(diffs[i]!=i+1)
			{
				jolly=false;
				break;
			}
		}

		if(jolly)
			cout<<"Jolly"<<endl;
		else
			cout<<"Not jolly"<<endl;
		}
		else
		{
			cout<<"Not jolly"<<endl;
		}
	}



return 0;
	
}