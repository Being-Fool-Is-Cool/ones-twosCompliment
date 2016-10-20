#include<bits/stdc++.h>
using namespace std;

void onesAndTwos(string num)
{
	string ones="";
	string twos="";
	
	int len=num.length();
	
	for(int i=0;i<len;i++)
	{
		if(num[i]=='0')
		{
			ones += '1';
		}
		else
		{
			ones += '0';
		}
	}
	twos=ones;
	
	for(int i=len-1;i>=0;i--)
	{
		if(twos[i]=='1')
		twos[i]='0';
		else
		{
			twos[i]='1';
			break;
		}
	}
	
	cout<<ones<<endl;
	cout<<twos<<endl;
}

int main()
{
	string num;
	cin>>num;
	onesAndTwos(num);
	return 0;
}
