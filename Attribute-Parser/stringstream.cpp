#include<iostream>
#include<sstream>

using namespace std;


int main(){
    string line = "<Hi> My name is Diplal </Hi>"; // taking mixed statement then printing each chunk
    stringstream ss(line);
    string token;
    
    while(token != "</Hi>"){
        cout << token << endl;
        ss >> token;
    }

    return 0;
}