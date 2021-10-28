#include<iostream>
using namespace std;
int main()
{   //定义一个数和它的各位
	int x=0,num1=0,num2=0,num3=0,num4=0,num5=0;           
	cout<<"请输入一个不多于五位的正整数:";
	//输入一个数
	cin>>x;                                               
	//求出它的各位
	num1=x%10;num2=x/10%10;num3=x/100%10;num4=x/1000%10;num5=x/10000%10;
	//判断它是几位数
	if(x>=0&&x<=9)	
	{cout<<"它的位数是1位"<<endl;cout<<"各位数字之和为："<<num1;}
	if(x>=10&&x<=99)
	{cout<<"它的位数是2位"<<endl;cout<<"各位数字之和为："<<num1+num2;}
	if(x>=100&&x<=999)
	{cout<<"它的位数是3位"<<endl;cout<<"各位数字之和为："<<num1+num2+num3;}
	if(x>=1000&&x<=9999)
	{cout<<"它的位数是4位"<<endl;cout<<"各位数字之和为："<<num1+num2+num3+num4;}
	if(x>=10000&&x<=99999)
	{cout<<"它的位数是5位"<<endl;cout<<"各位数字之和为："<<num1+num2+num3+num4+num5;}

	return 0;
}