#include<iostream>

// p 
// 2333322    2333777
// [34]       [122]         

int main(){
    char* p;

    char x=72;

    p= &x;


    std::cout<<"p= "<<(long long)p<<" x="<< *p<<std::endl;
    p++;
    std::cout<<"new p is "<<(long long)p<<std::endl;

    return 0;
}