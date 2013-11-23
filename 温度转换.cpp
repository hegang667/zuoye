// ConsoleApplication5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	float f=0,c=0;
	int a=0;
	cout<<"华氏转摄氏输入1；摄氏转华氏输入2"<<endl;
	
	cin>>a;
	switch(a){

 case 1: cout<<"请输入华氏温度"<<endl;
  cin>>f;
  c=(f-32)/9*5;
  cout<<c;
  break;
 case 2:cout<<"请输入摄氏温度"<<endl;
	 cin>>c;
	 f=c*9/5+32;
	 cout<<f;

	}

}
