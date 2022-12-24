#include<iostream>
using namespace std;

int main()
{
    int*  p;
    cout<<"a new pointer is "<<p<<endl;

    int x= 17;
    p=  &x;
    cout<<"x value = "<<x<<"  and the x pointer = "<<p<< endl;
    cout<<"pointer of x in long long = "<<(long long)p<<endl;
    
    cout<<"Hello world"<<endl;
    return 0;
}