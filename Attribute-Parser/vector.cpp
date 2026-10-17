#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> numbers = {10, 20, 30};

    for(int i{0}; i < sizeof(numbers)/sizeof(numbers[0]); ++i){
        cout << numbers[i] << " ";
    }

}