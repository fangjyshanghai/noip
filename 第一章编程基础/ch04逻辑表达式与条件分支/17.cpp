/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
//#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {

  int a;
  cin >> a;

 /* if(  a%4==0  && !( a%100==0 && a%400 !=0) )
    cout << "Y";
  else
    cout << "N";
*/

  if(  a%4==0  &&  a%100!=0 ||  a%400 ==0 )
    cout << "Y";
  else
    cout << "N";

  return 0;
}

/************************************************************************************断闰年
判断闰年       http://noi.openjudge.cn/ch0104/17/

描述
判断某年是否是闰年。

输入
输入只有一行，包含一个整数a(0 < a < 3000)

输出
一行，如果公元a年是闰年输出Y，否则输出N

样例输入
2006

样例输出
N

提示
公历纪年法中，能被4整除的大多是闰年，但能被100整除而不能被400整除的年份不是闰年， 能被3200整除的也不是闰年，如1900年是平年，2000年是闰年，3200年不是闰年。

************************************************************************************/
