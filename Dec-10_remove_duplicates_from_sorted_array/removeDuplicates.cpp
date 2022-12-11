#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int> myVec, int i, int j){
    int temp = myVec[i];
    myVec[i] = myVec[j];
    myVec[j] = temp;
}

int main(){
    vector<int> myVec = {1,1,1,2,3,3,4,5,5,5,6,6,7};

    bool activeRun = false;
    int distinctIndex = 0; 
    for(int i = 0; i < myVec.size()-1; i++){
        if(activeRun){
            if(myVec[i+1] == myVec[distinctIndex]){
                continue;  // continue active run
            }
            else{
                activeRun = false; // stop active run
                distinctIndex++;
                swap(myVec[i+1], myVec[distinctIndex]);
            }
        }
        else{
             if(myVec[i+1] == myVec[distinctIndex]){
                activeRun = true; // start new run
             } 
             else{  // move new element to distinct elements
                distinctIndex++;  
                swap(myVec[i+1], myVec[distinctIndex]);
             }
        }
    }

    // display the distinct elements
    for(int i = 0; i <= distinctIndex; i++){
        cout << myVec[i] << " ";
    }
    cout << endl;

    return 0;
} 