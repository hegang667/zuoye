
#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
        return 0;
}
#include<iostream>
using namespace std;
struct Student {
        char name [20],subname[10][20];
        float score;
        long card;
}stu[200];
char subject [10][30]={"c++","math","Chinese","Japanese","English","physics","chemistry","C programming language","data structure","PE"};      //用二维字符数组储存要选的科目
int number[10];               //用于储存选各个科目的人数
int k=0;
void list();
void choose(int number[10]);
void retire(int number[10]);
void remember();
int main()
{
                
                cout <<"--------菜单--------"<<endl;
                cout <<"1) 查看名单"<<endl;
                cout<<"2) 选课"<<endl;
                cout<<"3) 退课"<<endl;
                cout <<"4) 录入成绩"<<endl;
                cout<<"5) 退出程序"<<endl;
                while (k<=5)
        {
                cin>> k;
                switch(k)
                {
                case 1:list();
                        break;
                case 2:choose(&number[10]);
                        break;
                case 3:retire(&number[10]);
                        break;
                case 4:remember();
                        break;
                case 5:return 0;
                default:
                        cout<<"您输入了错误的菜单项，请重新选择！";
                }
        }
        return 0;
}
void list()
{
        cout <<"------学生名单--------"<<endl;
        cout <<"姓名"<<'\t'<<"学号"<<endl;
        for(int i=0;i<200;i++)
        {
                cout <<stu[i].name<<'\t'<<stu[i].card<<endl;
        }
        cout<<"-------学生名单-------"<<endl;
}
void choose(int number[10])
{
        for(int i=0;i<10;i++)
        {
                for(int j=0;j<200;j++)
                {
                        cout<<stu[j].name<<"开始选课，所选课程是："<<endl;
                        for (int k=0;k<10;k++)   //一个人最多选10个科目，并用k一一对应了储存科目总数的数组
                        {
                        cin >>stu[j].subname[k];
                        if(stu[j].subname[k]==subject[i])
                        {
                                number[k]++;
                        }
                        }
                }
        }
}
void retire( int number[10])
{
        for(int i=0;i<10;i++)
        {
                for(int j=0;j<200;j++)
                {
                        cout<<stu[j].name<<"开始退课，所退课程是："<<endl;
                        for (int k=0;k<10;k++)
                        {
                        cin >>stu[j].subname[k];
                        if(stu[j].subname[k]==subject[i])
                        {
                                number[k]--;
                        }
                        }
                }
        }
}
void remember()
{
        int flag=0,changed=0;
        for (int i=0;i<200;i++)      //按学号从小到大排序
        {
                changed=0;
                for(int j=1;j<=200-i;j++)
                {
                        if(stu[j].card>stu[j+1].card)
                        {
                                stu[0]=stu[j];
                                stu[j]=stu[j+1];
                                stu[j+1]=stu[0];
                                changed=1;
                        }
                }
                if(changed==1)
                        break;
        }
        cout <<"按学号从小到大的顺序输出:"<<endl;
        for(int i=0;i<200;i++)
        {
                for(int k=0;k<10;k++)
                {
                        cout<<stu[i].name<<"的"<<stu[i].subname[k]<<"的成绩是："<<endl;
                        cin>>stu[i].score;
                }
                        cout <<"录完一人，是否继续！"<<endl;
                        cin>>flag;
                        if(flag==0)
                        {
                                cout<<"停止！"<<endl;
                                break;
                        }
                        else
                                cout<<"继续！"<<endl;
                
        }
                    cout<<"-------------所有学生的信息------------" ;
                        cout<<"姓名"<<'\t'<<"学号"<<'\t'<<"所选课程"<<'\t'<<"该课程成绩"<<endl;
                        for(int i=0;i<200;i++)
                        {
                                for(int k=0;k<10;k++)
                                {
                        cout<<stu[i].name<<'\t'<<stu[i].card<<'\t'<<stu[i].subname[k]<<'\t'<<stu[i].score<<endl;
                                }
                        }
}