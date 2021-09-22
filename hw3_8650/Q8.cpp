#include <iostream>
#include <string>

using namespace std;


string check_string(string a){
 
    while (a.length() > 2){
        if (a.back() == a.front()){
            
            a.pop_back();
            a.erase(0,1);
            cout << a << endl;
            return check_string(a);
            
        } else {
            
            cout << "it's not. " << endl;
            break;
        }   
    }
    
}


int main(){

	string b = "gohangasalamiimalasagnahog";

    
    check_string(b);
    
    return 0;

}
