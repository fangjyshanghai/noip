/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;
int main(int argc, char** argv) {
	
	int k;
	cin >> k;
	

	int t1 =0;
	int t5 = 0;
	int t10 =0;
	for(int i=0; i<k; i++)
	{
		int n;
		cin >> n;
		if( n==1)  t1++;
		if( n==5)  t5++;
		if( n==10) t10++; 
		
	}
	
	cout << t1 << endl;
	cout << t5 << endl;
	cout << t10;

	
	return 0;
}

/*********************************************************************************
整数的个数

    查看
    提交
    统计
    提问

总时间限制:
    1000ms
内存限制:
    65536kB

描述
    给定k（1<k<100）个正整数，其中每个数都是大于等于1，小于等于10的数。写程序计算给定的k个正整数中，1，5和10出现的次数。
输入
    输入有两行：第一行包含一个正整数k，第二行包含k个正整数，每两个正整数用一个空格分开。
输出
    输出有三行，第一行为1出现的次数，，第二行为5出现的次数，第三行为10出现的次数。
样例输入

    5
    1 5 8 10 5 

样例输出

    1
    2
    1



************************************************************************************/
