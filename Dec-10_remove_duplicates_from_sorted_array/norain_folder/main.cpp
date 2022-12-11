#include<iostream>
#include<vector>

// Given an integer array nums sorted in non-decreasing order, 
// remove the duplicates in-place such that each unique element 
// appears only once. The relative order of the elements should 
// be kept the same.
//nums = [0,0,1,1,1,2,2,3,3,4]


int main(void){                     //                           fast 
                                    //  slow              
    std::vector<int> vec{0,    0,   1,   1,   1,   2,   2,  2,  3};
                        //{0,    1,   2,  3,  }
                        //o)(n)
    int slow=0;
    for(int fast=0; fast<vec.size(); fast++){
        if(vec[fast]!=vec[slow]){
            slow++;
            vec[slow] = vec[fast];
        }
    }

    for(int i =0; i<=slow; i++){
        std::cout<<vec[i]<<" ";
    }

    std::cout<<std::endl;
    return 0;
}