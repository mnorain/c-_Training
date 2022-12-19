#include<iostream>
#include<vector>

std::vector<int>  AddOne(std::vector<int>& digits){
    std::vector<int> result(digits.size(), 0);
    
        for(int i=0; i<digits.size(); i++){
        result[i] = digits[i];
    }

    for(int i= result.size()-1 ; i>=0; i--){
       if (result[i] < 9){
        result[i]++ ;
        return result ;
        break ;
       } 
        else 
        result[i]= 0 ;


    }
result.resize(digits.size() + 1) ;
result[0]=1 ;

return result ; 

}


int main(){
    
    std::vector<int> input {9,9,9,9};
    std::vector<int> output;

    output = AddOne(input);

    for(auto a:output){
        std::cout<<a<<" ";
    }

    std::cout<<std::endl;
}