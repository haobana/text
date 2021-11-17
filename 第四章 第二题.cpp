#include<iostream>
using namespace std;
int main()
 {
     int i,j,k=0;
     for(i=100;i<=200;i++)
	 {
         j=2;
         while(j<i&&i%j!=0) j++;//筛选关卡：除于一个比自身小的数，如果不能整除就慢慢增加除数，能整除就停止
        if(i==j)                 //一直除到自身也不能被整除，它就是素数
		{
        cout<<i<<"  ";                 //输出素数
		k++;
		if(k%5==0)cout<<endl;
		}
     }
     return 0;
 }