#include <iostream>
#include <utility>
#include <string>
#include <cstdlib>
using namespace std;

template<typename t>
t print_dot(t a){
    cout << a << endl;
    return a;
}

void introduction(){
    cout << "Welcome to the dot game where you just need to press enter for the dots to appear.\n";
    cout << "Press enter for dots to appear vertically and horizontally:v\n";
    cout << "Press 'q' to quit=)\n";
    cout << "When the dots finished appearing, you can press 'q' to quit\n";
    cout << "Enjoy!=)\n";
}
void print_dot_horizontal(char a){
    string baka;
    if(baka.empty()){
        for (int i = 0; i < 5; i++){
        cout << a;
        }
    }else if(baka == "q"){
        exit(EXIT_FAILURE);
    }
    else{
        for (int i = 0; i < 5; i++){
        cout << a;
    }
    }
    
    cout << endl;
}

void print_dot_horizontal_(char d){
    string cyka;
    if(cyka.empty()){
        for (int i = 0; i < 5; i++){
        cout << d;
        }
    }else if(cyka == "q"){
        exit(EXIT_FAILURE);
    }else{
        for (int i = 0; i < 5; i++){
        cout << d;
    }
    }
    cout << endl;
}

void print_dot_vertical(char b){
    string kore;
    getline(cin, kore);
    if(kore.empty()){
        for(int i = 0; i < 5;i++){
        cout << b << endl;
        }
    }else if(kore == "q"){
        exit(EXIT_FAILURE);
    }else{
        for(int i = 0; i < 5;i++){
        cout << b << endl;
        }
    }
    
    cin.ignore();
}
void print_dot_vertical_(char c){
    string wa;
    getline(cin, wa);
    if(wa.empty()){
        for(int i = 0; i < 5; i++){
        cout << "     " << c << endl;
    }
    }else if(wa == "q"){
        exit(EXIT_FAILURE);
    }
    else{
        for(int i = 0; i < 5; i++){
        cout << "     " << c << endl;
    }
    }
}


int main(){

    introduction();
    
    char dot = '.';
    string enter;
    while(true){
        
        getline(cin, enter);
        if(enter.empty()){
            
            print_dot_horizontal(dot);
            
            print_dot_vertical(dot);
            
            print_dot_horizontal_(dot);
            
            print_dot_vertical_(dot);
            
        }
    
        else if(enter == "exit"){
            break;
        }else{
            break;
        }
        
    }

    return 0;

}