#include <iostream>
using namespace std;
 
int main() {

 
    int T, A, B, C, D, E;
    cin >> T >> A >> B >> C >> D >> E;
    int arr[5] = {A, B, C, D, E};
    int numberOfCorrects = 0;
    
    for(int i = 0; i< 5; i++){
        if(T == arr[i]){
            numberOfCorrects++;
        }
    }
    cout<< numberOfCorrects<< endl;
    
 
    return 0;
}
