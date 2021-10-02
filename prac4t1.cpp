#include<iostream>
namespace first{
int add(int a,int b)
{
    return a+b;
}
}
int main()
{
int a=1,b=900;
int ans=first::add(a,b);
std::cout<<ans;
}
   
