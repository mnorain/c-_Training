#include<iostream>
#include<cctype>

//bool isAlphanumeric(char c)
// tolower from the cctype header file
//  lr
//ABCCB A
bool isAlphanumeric(char c){
    // check if this char is a valid digit 
    // or char is valid 
    if((c>='0')&&(c<='9')){
        return true;
    }

    if((c>='a') && (c<='z')){
        return true;
    }

    if((c>='A') && (c<='Z')){
        return true;
    }
    
    return false;
}

int main(){
    std::string str{""};
    int l=0; 
    int r=str.size()-1;

    while(l<r){
        if(!isAlphanumeric(str[l])){
            l++;
        } 
        else if (!isAlphanumeric(str[r])){
            r--;
        } else{
            if(tolower(str[l]) != tolower(str[r])){
                std::cout<<"This string is not palindrome"<<std::endl;
                return 0;
            } else {
                l++;
                r--;
            }
        }
    }
    std::cout<<"This string is palindrome"<<std::endl;
    return 0;
}