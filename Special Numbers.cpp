/*
  153是一个非常特殊的数，它等于它的每位数字的立方和,即153=5*5*5+3*3*3,
编程求所有满足这种条件的三位十进制数。
输出格式
按从小到大的顺序输出满足条件的三位十进制数，每个数1行
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i;
    for (i=100;i<1000;i++)
    {
        int a=i/100;
        int b=i/10%10;
        int c=i%10;
        if(i==pow(a,3)+pow(b,3)+pow(c,3))
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}
