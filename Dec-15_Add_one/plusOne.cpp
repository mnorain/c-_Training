
#include<iostream>
#include<vector>

// You are given a large integer represented as an integer array digits, 
// where each digits[i] is the ith digit of the integer. The digits are 
// ordered from most significant to least significant in left-to-right order. 
// The large integer does not contain any leading 0's.
// Increment the large integer by one and return the resulting array of digits
// [1,2,3] 

// []
// 
// [1,2,9] >> [1,3,0]
// [1,9,9] >> [2,0,0]
// [9,9,9] >> [1,0,0,0]
// [9] >> [1,0]
// [1,2,8]

std::vector<int>  plusOne(std::vector<int>& digits)
{
    std::vector<int> res(digits.size(), 0);
    for(int i=0; i<digits.size(); i++)
    {
        res[i] = digits[i];
    }

    for(int i= res.size()-1 ; i>=0; i--)
    {
        res[i]++;
        if(res[i]<=9) return res;
        res[i]=0;
    }

    std::vector<int> res2(digits.size()+1, 0);
    res2[0]=1;

    return res2;
}

int main(){
    
    std::vector<int> input {8,9,9};
    std::vector<int> output;

    output = plusOne(input);

    for(auto a:output){
        std::cout<<a<<" ";
    }

    std::cout<<std::endl;
}
