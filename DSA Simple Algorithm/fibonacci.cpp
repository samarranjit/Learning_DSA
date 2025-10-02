#include <iostream>

using namespace std;
int main(){
    cout << "Fibonacci Sequence up to 18 terms:" << endl;

    // Implementation using a for loop:
    int term1 = 0, term2 =1, nextTerm;
    cout << term1 << ", " << term2 << ", ";
    for (int i =0 ; i < 19; i++){
        nextTerm = term1 + term2;
        cout << nextTerm;
        if (i != 18) {
            cout << ", ";
        }
        term1 = term2;
        term2 = nextTerm;
    }

    


    return 0;
}