
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
char subject [10][30]={"c++","math","Chinese","Japanese","English","physics","chemistry","C programming language","data structure","PE"};      //�ö�ά�ַ����鴢��Ҫѡ�Ŀ�Ŀ
int number[10];               //���ڴ���ѡ������Ŀ������
int k=0;
void list();
void choose(int number[10]);
void retire(int number[10]);
void remember();
int main()
{
                
                cout <<"--------�˵�--------"<<endl;
                cout <<"1) �鿴����"<<endl;
                cout<<"2) ѡ��"<<endl;
                cout<<"3) �˿�"<<endl;
                cout <<"4) ¼��ɼ�"<<endl;
                cout<<"5) �˳�����"<<endl;
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
                        cout<<"�������˴���Ĳ˵��������ѡ��";
                }
        }
        return 0;
}
void list()
{
        cout <<"------ѧ������--------"<<endl;
        cout <<"����"<<'\t'<<"ѧ��"<<endl;
        for(int i=0;i<200;i++)
        {
                cout <<stu[i].name<<'\t'<<stu[i].card<<endl;
        }
        cout<<"-------ѧ������-------"<<endl;
}
void choose(int number[10])
{
        for(int i=0;i<10;i++)
        {
                for(int j=0;j<200;j++)
                {
                        cout<<stu[j].name<<"��ʼѡ�Σ���ѡ�γ��ǣ�"<<endl;
                        for (int k=0;k<10;k++)   //һ�������ѡ10����Ŀ������kһһ��Ӧ�˴����Ŀ����������
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
                        cout<<stu[j].name<<"��ʼ�˿Σ����˿γ��ǣ�"<<endl;
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
        for (int i=0;i<200;i++)      //��ѧ�Ŵ�С��������
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
        cout <<"��ѧ�Ŵ�С�����˳�����:"<<endl;
        for(int i=0;i<200;i++)
        {
                for(int k=0;k<10;k++)
                {
                        cout<<stu[i].name<<"��"<<stu[i].subname[k]<<"�ĳɼ��ǣ�"<<endl;
                        cin>>stu[i].score;
                }
                        cout <<"¼��һ�ˣ��Ƿ������"<<endl;
                        cin>>flag;
                        if(flag==0)
                        {
                                cout<<"ֹͣ��"<<endl;
                                break;
                        }
                        else
                                cout<<"������"<<endl;
                
        }
                    cout<<"-------------����ѧ������Ϣ------------" ;
                        cout<<"����"<<'\t'<<"ѧ��"<<'\t'<<"��ѡ�γ�"<<'\t'<<"�ÿγ̳ɼ�"<<endl;
                        for(int i=0;i<200;i++)
                        {
                                for(int k=0;k<10;k++)
                                {
                        cout<<stu[i].name<<'\t'<<stu[i].card<<'\t'<<stu[i].subname[k]<<'\t'<<stu[i].score<<endl;
                                }
                        }
}