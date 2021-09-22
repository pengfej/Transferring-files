#include <iostream>
#include <stdlib.h>
#include <vector>


using namespace std;

int rec_sum(vector<int> B, int n){
 
    if (n != 0) {
        return rec_sum(B,n-1) + B[n];
    } else {
        return B[0];
    }
}


int main(){
    
    //creating a matrix.
    
    vector<int> A(3,3);
    vector<int> B(9,1);
    
    
    for (int i(0); i<3; i++){
        for (int j(0); j<3; j++){
         
            int r1 = rand() % 100;
            B[3*i +j] = r1;
            cout << " " << r1 << " " << endl;
    
            
        }        
    }
        
        
    int s1 = rec_sum(B,8);    
    cout << "after all " << endl;
    cout << s1 << endl;
    
    
    
}
