#include <stdio.h>
#include <iostream>
 using namespace std;
int main() {

    int S = 0;
    int M = 0;
    int H = 0;
    
    cin >> S;
    while(S >= 60){
        S -= 60;
        M++;
        while(M >= 60){
            M -= 60;
            H++;
        }
    }
    
    cout << H << ":" << M << ":" << S << endl;
    

     
 
    return 0;
}
