#include<iostream>
using namespace std;
int main()
{   //����һ���������ĸ�λ
	int x=0,num1=0,num2=0,num3=0,num4=0,num5=0;           
	cout<<"������һ����������λ��������:";
	//����һ����
	cin>>x;                                               
	//������ĸ�λ
	num1=x%10;num2=x/10%10;num3=x/100%10;num4=x/1000%10;num5=x/10000%10;
	//�ж����Ǽ�λ��
	if(x>=0&&x<=9)	
	{cout<<"����λ����1λ"<<endl;cout<<"��λ����֮��Ϊ��"<<num1;}
	if(x>=10&&x<=99)
	{cout<<"����λ����2λ"<<endl;cout<<"��λ����֮��Ϊ��"<<num1+num2;}
	if(x>=100&&x<=999)
	{cout<<"����λ����3λ"<<endl;cout<<"��λ����֮��Ϊ��"<<num1+num2+num3;}
	if(x>=1000&&x<=9999)
	{cout<<"����λ����4λ"<<endl;cout<<"��λ����֮��Ϊ��"<<num1+num2+num3+num4;}
	if(x>=10000&&x<=99999)
	{cout<<"����λ����5λ"<<endl;cout<<"��λ����֮��Ϊ��"<<num1+num2+num3+num4+num5;}

	return 0;
}