#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector <string>  > convert(int s, char n)
{
 vector<vector<string> > digit(2*s+3, vector<string>(s+2, " "));
 int midrow=(s+1);
 switch (n) {
	 case '0':
		 for(int i=0;i<digit.size();i++)
		 {
			 for(int j=0;j<digit[i].size();j++)
			 {
				 if(i==0) // first row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
				 else if(i>0 && i<midrow) //between first row and mid row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else if(i==midrow) //mid row
				 {
					 continue;
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

	 

				 }
				 else if(i>midrow && i<digit.size()-1) // between mid row and last row
				 {

					 if(j==0 || j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else //last row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
			 }
		 }
		 break;
	 case '1':
		 for(int i=0;i<digit.size();i++)
		 {
			 for(int j=0;j<digit[i].size();j++)
			 {
				 if(i==0) // first row
				 {
					 continue;
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
				 else if(i>0 && i<midrow) //between first row and mid row
				 {
					 if(j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else if(i==midrow) //mid row
				 {
					 continue;
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

	 

				 }
				 else if(i>midrow && i<digit.size()-1) // between mid row and last row
				 {

					 if( j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else //last row
				 {
					 continue;
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
			 }
		 }
		 break;
		 case '2':
		 for(int i=0;i<digit.size();i++)
		 {
			 for(int j=0;j<digit[i].size();j++)
			 {
				 if(i==0) // first row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
				 else if(i>0 && i<midrow) //between first row and mid row
				 {
					 if(j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else if(i==midrow) //mid row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

	 

				 }
				 else if(i>midrow && i<digit.size()-1) // between mid row and last row
				 {

					 if(j==0)
						 digit[i][j]="|";
				 }
				 else //last row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
			 }
		 }
		 break;
		 case '3':
		 for(int i=0;i<digit.size();i++)
		 {
			 for(int j=0;j<digit[i].size();j++)
			 {
				 if(i==0) // first row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
				 else if(i>0 && i<midrow) //between first row and mid row
				 {
					 if(j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else if(i==midrow) //mid row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

	 

				 }
				 else if(i>midrow && i<digit.size()-1) // between mid row and last row
				 {

					 if( j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else //last row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
			 }
		 }
		 break;
		 case '4':
		 for(int i=0;i<digit.size();i++)
		 {
			 for(int j=0;j<digit[i].size();j++)
			 {
				 if(i==0) // first row
				 {
					 continue;
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
				 else if(i>0 && i<midrow) //between first row and mid row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else if(i==midrow) //mid row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

	 

				 }
				 else if(i>midrow && i<digit.size()-1) // between mid row and last row
				 {

					 if( j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else //last row
				 {
					 continue;
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
			 }
		 }
		 break;
		 case '5':
		 for(int i=0;i<digit.size();i++)
		 {
			 for(int j=0;j<digit[i].size();j++)
			 {
				 if(i==0) // first row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
				 else if(i>0 && i<midrow) //between first row and mid row
				 {
					 if(j==0)
						 digit[i][j]="|";
				 }
				 else if(i==midrow) //mid row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

	 

				 }
				 else if(i>midrow && i<digit.size()-1) // between mid row and last row
				 {

					 if(j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else //last row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
			 }
		 }
		 break;
		 case '6':
		 for(int i=0;i<digit.size();i++)
		 {
			 for(int j=0;j<digit[i].size();j++)
			 {
				 if(i==0) // first row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
				 else if(i>0 && i<midrow) //between first row and mid row
				 {
					 if(j==0)
						 digit[i][j]="|";
				 }
				 else if(i==midrow) //mid row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

	 

				 }
				 else if(i>midrow && i<digit.size()-1) // between mid row and last row
				 {

					 if(j==0 || j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else //last row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
			 }
		 }
		 break;
		 case '7':
		 for(int i=0;i<digit.size();i++)
		 {
			 for(int j=0;j<digit[i].size();j++)
			 {
				 if(i==0) // first row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
				 else if(i>0 && i<midrow) //between first row and mid row
				 {
					 if(j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else if(i==midrow) //mid row
				 {
					 continue;
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

	 

				 }
				 else if(i>midrow && i<digit.size()-1) // between mid row and last row
				 {

					 if(j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else //last row
				 {
					 continue;
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
			 }
		 }
		 break;
		 case '8':
		 for(int i=0;i<digit.size();i++)
		 {
			 for(int j=0;j<digit[i].size();j++)
			 {
				 if(i==0) // first row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
				 else if(i>0 && i<midrow) //between first row and mid row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else if(i==midrow) //mid row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

	 

				 }
				 else if(i>midrow && i<digit.size()-1) // between mid row and last row
				 {

					 if(j==0 || j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else //last row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
			 }
		 }
		 break;
		 case '9':
		 for(int i=0;i<digit.size();i++)
		 {
			 for(int j=0;j<digit[i].size();j++)
			 {
				 if(i==0) // first row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
				 else if(i>0 && i<midrow) //between first row and mid row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else if(i==midrow) //mid row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

	 

				 }
				 else if(i>midrow && i<digit.size()-1) // between mid row and last row
				 {

					 if(j==(digit[i].size()-1))
						 digit[i][j]="|";
				 }
				 else //last row
				 {
					 if(j==0 || j==(digit[i].size()-1))
						  continue;
					 else
					 {
						 digit[i][j]="-";
					 }

				 }
			 }
		 }
		 break;
	
	 
	
 	}

 return digit;
}
int main()
{
	int s;
	string n;
	cin>>s>>n;
	while(s!=0)
	{
		vector<vector<string> > digit(2*s+3, vector<string>(s+2, " "));
		vector<vector<vector<string> > > digits;
		for(int i=0;i<n.length();i++)
		{
			digits.push_back(convert(s, n[i]));
		}

		for(int i=0;i<(2*s+3);i++)
		{
			for(int j=0;j<n.length();j++)
			{
			
				for(int k=0;k<s+2;k++)
				{
					cout<<digits[j][i][k];
				}
				if(j+1!=n.length())
				cout<<" ";
			}
			cout<<endl;
		}
		cin>>s>>n;
			cout<<endl;

	}


	return 0;
}