#include<iostream>
using namespace std;

int main()
{
	char op[]={'+','-','*','/'};
	string temp[] = {"t0","t1","t2","t3","t4","t5"};
	string in;

	int count=0;
	
	cout<<"Enter input ";
	cin>>in;
	
	for(int i=0;i<in.length();i++)
	{
		for(int j=0;j<4;j++)
		{
			if(in[i]==op[j])
			{
				if(count==0)
				{
					cout<<"t0= "<<in[i-1]<<in[i]<<in[i+1]<<endl;
				}
				else
				{
					cout<<temp[count]<<"= "<<temp[count-1]<<in[i]<<in[i+1]<<endl;
				}
				count++;
				break;
			}
		}
	}
	return 0;
}
