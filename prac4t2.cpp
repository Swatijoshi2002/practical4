#include<iostream>
namespace first{
int add(int a,int b)
{
    return a+b;
}
}
using namespace std;
using namespace first;
int main()
{
int a=1,b=900;
int ans=add(a,b);
cout<<ans;
}
   
