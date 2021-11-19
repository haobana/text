#include<iostream>
using namespace std;

int prime(int num)                                        //判断是否为素数的函数  是，则输出1
{       for(int i=2;i<num;i++)
              if(num%i==0)
				  return 0;
              return 1;
}
int main()
{       int n,n1,n2;                                     //定义一个数和它的和数
		cout<<"请输入一个整数n:";
		cin>>n;
		for(int i=1;i<=n/2;i++)                         //循环输出所有成立的等式
		{                                                  
		n1=i;                                            //其中一个和数从1开始，逐渐增加
		n2=n-n1;
		if(prime(n1)==1&&prime(n2)==1)                  //两个和数都为素数则输出等式
			cout<<"n="<<n1<<"+"<<n2<<endl;
		}
		return 0;
}