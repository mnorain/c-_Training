# c-_Training
#include <iostream>
#include <vector>
using namespace std;


int main ()
{
int x,y;

std::vector<int> vec{0,0,1,1,1,2,2,3};

for (int x=0; x < 8; x++);
{
if (vec[x] = vec[x+1])
    for (int y=x+2; y < 8; y++)
    {
        vec[x+1] = y;
    }
}

cout << vec[0];



}

