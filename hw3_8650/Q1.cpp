#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;


double** transpose(double** A){
    
    double** A_t;
    
    int n  = 3;
    
    A_t = new double*[n];
        
        for (int j = 0; j < n; j++){
         
            A_t[j] = new double[n];
            
            for (int i = 0; i < n; i++){
             
                A_t[j][i] = A[i][j];
                
            }
            
    }
    
    
    return A_t;
    
    
}


void print_mat(double** B){
 
    int n = 3;
    
    for (int i = 0; i < n; i++){
        
        for (int j = 0; j < n; j++){
         
            cout << " " << B[i][j];
            
        }
        
        cout << "\n" << endl;
        
    }
    
}

int main(){
    
    int n = 3;
    
    double** A;
    double** A_t;
    
    
    A = new double*[n];
        
        for (int j = 0; j < n; j++){
         
            A[j] = new double[n];
            
            for (int i = 0; i < n; i++){
             
                A[j][i] = rand();
                
            }
            
    }
    
    A_t = transpose(A);
    
    print_mat(A);
    
    cout << "=====================================" << endl;
    
    print_mat(A_t);
    
}
