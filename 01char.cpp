/*
输出32行，从1到32的01字符串。
*/


#include <iostream>
using namespace std;

int main()
{
    int i;
    for (i=0;i<32;i++)
    {
        
        cout<<i%32/16;
        cout<<i%16/8;
        cout<<i%8/4;
        cout<<i%4/2;
        cout<<i%2<<"\n";
    }
    return 0;
}
