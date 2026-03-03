#include <iostream>
#include <utility>
#include <string>

using namespace std;

template<typename t>
t print_dot(t a){
    cout << a << endl;
    return a;
}

void introduction(){
    cout << "Welcome to the dot game where you just need to press enter for the dots to appear.\n";
    cout << "Enjoy!=)\n";
}
void print_dot_horizontal(string a){
    for (int i = 0; i < 5; i++){
        cout << a << " ";
    }
}

void print_dot_vertical(string b){
    for(int i = 0; i < 5;i++){
        cout << b << endl;
    }
}

int main(){

    introduction();
    
    string dot = ".";

    

    return 0;

}