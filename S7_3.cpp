#include<iostream>
using namespace std;

int prime(int num)                                        //�ж��Ƿ�Ϊ�����ĺ���  �ǣ������1
{       for(int i=2;i<num;i++)
              if(num%i==0)
				  return 0;
              return 1;
}
int main()
{       int n,n1,n2;                                     //����һ���������ĺ���
		cout<<"������һ������n:";
		cin>>n;
		for(int i=1;i<=n/2;i++)                         //ѭ��������г����ĵ�ʽ
		{                                                  
		n1=i;                                            //����һ��������1��ʼ��������
		n2=n-n1;
		if(prime(n1)==1&&prime(n2)==1)                  //����������Ϊ�����������ʽ
			cout<<"n="<<n1<<"+"<<n2<<endl;
		}
		return 0;
}