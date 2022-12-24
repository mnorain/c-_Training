#include <stdio.h>
#include <string>
#include<iostream>
int main(){
    std::string country="sudan";
    std::string* p_str;
    p_str= &country;
    char rank;
    rank=66;
    char* p_char;
    p_char= &rank;
    int independence=1956;
    int* p_int;
    p_int= &independence;
    
    std::cout<<"p= "<<(long long)p_str<<"Country ="<< *p_str<<std::endl;
    p_str++;
    std::cout<<"new p location is "<<(long long)p_str<<std::endl;
        std::cout<<"p= "<<(long long)p_char<<"rank ="<< *p_char<<std::endl;
    p_char++;
    std::cout<<"new p location is "<<(long long)p_char<<std::endl;
         std::cout<<"p= "<<(long long)p_int<<"independence date : "<< *p_int<<std::endl;
    p_int++;
    std::cout<<"new p location is "<<(long long)p_int<<std::endl;

    return 0;
}
