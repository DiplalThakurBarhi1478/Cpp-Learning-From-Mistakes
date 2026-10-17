#include<iostream>
#include<map>

using namespace std;

int main(){
    string line = "Hello, This is Diplal";
    int pos = line.find('D');
    cout << pos;


    map<string, int> students;
    students.insert({"Diplal", 18});

    auto it = students.find("Diplal");

    if(it != students.end()){
        cout << endl;
        cout << "Found." << endl;
        cout << it->first << " " << it->second;
    }


    return 0;
}