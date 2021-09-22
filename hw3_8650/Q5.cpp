#include <iostream>

using namespace std;

void select_and_drop(int a[], int size){
    
    if (size > 0){
     
        k = random(size);
        a[k] = a[k+1];
        return select_and_drop(a, size - 1);
        
    } else {
        
        std::cout << "empty. " << std::endl;
        
    }
    
 
    
    
}

int main(){
    
    int a[] = {1,2,3};
    
    a[1] = a[2];
    
    cout << sizeof(a) - 2;
    
    return 0;
    
}
