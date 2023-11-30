#include <iostream>
#include <memory>
#include <cstdarg>

using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
};

int sum(int n,...)
{
    va_list list;
    va_start(list,n);
    
    int x;
    int s=0;
    for(int i=0;i<n;i++){
        x=va_arg(list,int);
        s+=x;
    }
    return s;
}

int main(int argc, char const *argv[])
{

cout<<sum(3,10,20,30)<<endl;
cout<<sum(5,1,2,3,4,5)<<endl;
}
//test