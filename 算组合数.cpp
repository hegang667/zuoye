// ConsoleApplication6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include<iostream>
using namespace std;
int di ( int a ){

	   if(1==a)return 1
;else return a*di(a-1)

;    }

int main()
{
	int m,n,out;

cout<<"请输入n和m"<<endl;
cin>>n;
cin>>m;
out=di(n)/di(m);
out/=di(n-m);
cout<<out<<endl;

}