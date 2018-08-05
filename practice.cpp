#include<iostream>
using namespace std;
int main()
{
	string in;
	cin>>in;
	int count=0;
	char op[]="+-*/";
	string temp[]={"t0","t1","t2","t3"};
	for(int i=0;i<in.size();i++)
	{
		for(int j=0;j<4;j++)
		{
			if(op[j]==in[i])
			{
				if(count==0)
				{
					cout<<"t0="<<in[i-1]<<in[i]<<in[i+1]<<endl;
				}
				else
				{
					cout<<temp[count]<<"="<<temp[count-1]<<in[i]<<in[i+1]<<endl;
				}
				count++;break;
			}
		}
	}
}
