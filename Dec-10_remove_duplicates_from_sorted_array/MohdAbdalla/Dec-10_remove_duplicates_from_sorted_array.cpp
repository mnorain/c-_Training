#include<iostream>
#include<vector>


 
int main(){

std::vector<int> vec={0,0,1,2,4,4,4,5,5,6,6,6,6,7};
 int n = vec.size();
 
 int j= 0 ;
 for (int i=1 ; i<n ; i++ ) {
    if (vec[i] != vec[j]){
        j = ++j ;
        vec[j] = vec[i] ;
    }
 } 

  
 for (int i=n-1 ; i>j ;i--){
    vec.pop_back() ;
 }

for (int i=0 ; i <= j ; i++ ){
    std::cout<<vec[i]<<" " ;

}
std::cout<<std::endl;


return 0 ;

}