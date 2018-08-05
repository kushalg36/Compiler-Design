#include<iostream>
#include<ctype.h>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int isKeyword(char buffer[])
{
	char keyword[][10]={"int","float"};
	for(int i=0;i<2;i++)
	{
		if(strcmp(keyword[i],buffer)==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	char ch,buffer[15],op[7]="+-*/%=";
	ifstream fin("demo.txt");
	int j=0;
	if(!fin.is_open())
	{
		cout<<"Error\n";exit(0);
	}
	else
	{
		while(!fin.eof())
		{
			ch=fin.get();
			for(int i=0;i<6;i++)
			{
				if(ch==op[i])
				{
					cout<<ch<<" is operator\n";
				}
			}
			if(isalnum(ch))
			{
				buffer[j++]=ch;
			}
			else if((ch==' '||ch=='\n')&&(j!=0))
			{
				buffer[j]='\0';j=0;
				if(isKeyword(buffer)==1)
				{
					cout<<buffer<<" is keyword\n";
				}
				else
				{
					cout<<buffer<<" is identifer\n";
				}
			}
		}
	}
}
