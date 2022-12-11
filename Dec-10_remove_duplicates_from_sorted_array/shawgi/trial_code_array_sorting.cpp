#include <iostream>
#include <vector>
int main()
{
	std::vector < int > v {1, 1, 2, 3, 3, 4, 5, 6, 6, 7, 8, 8, 9};
    for (int i = 0; i < v.size (); i++){
    	if (v[i] == v[i + 1]){
    		v.erase(v.begin() + (i + 1));
      }
	}
	return 0;
}