// ConsoleApplication6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include<iostream>
using namespace std;
float fang(float x,int y)
{
if(1==y) return x;
else return (x*fang(x,y-1));

}
int main()
{
	int y;
	float x;
	cout<<"请输入X和Y"<<endl;
	cin>>x;
	cin>>y;
	cout<<fang(x,y);
}

