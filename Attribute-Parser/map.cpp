#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string, int> students;

    students["Diplal"] = 18;
    students["Aman"] = 20;

    for(auto individual : students){
        cout << individual.first << " " << individual.second << endl;
    }
    
    return 0;
}