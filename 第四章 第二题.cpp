#include<iostream>
using namespace std;
int main()
 {
     int i,j,k=0;
     for(i=100;i<=200;i++)
	 {
         j=2;
         while(j<i&&i%j!=0) j++;//ɸѡ�ؿ�������һ��������С��������������������������ӳ�������������ֹͣ
        if(i==j)                 //һֱ��������Ҳ���ܱ�����������������
		{
        cout<<i<<"  ";                 //�������
		k++;
		if(k%5==0)cout<<endl;
		}
     }
     return 0;
 }