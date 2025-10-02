#include <iostream>

using namespace std;


int count =0;
// Fibonacci first 18 terms
void fibonacciRecursion(int term1, int term2){
     if (count < 18){
        int nextTerm = term1 + term2;
         cout << nextTerm;
        if (count != 17){
            cout << ", ";}
        count++;
        fibonacciRecursion(term2, nextTerm);
     }   
    }

// Finding the nth Fibonacci Term:
int fibonacciNTerm(int N){
    if (N <=1) {
        return N;
    }
    else{
        return fibonacciNTerm(N-1) + fibonacciNTerm(N-2);
    }

}

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

    // Implementation using Recursion:
    cout << "\nFibonacci Sequence using Recursion:" << endl;
    fibonacciRecursion(0, 1);
    cout << endl;

    // Printing the nth fibonacci term
    cout << "Fibonacci Sequence for nth term: \n";
    cout << fibonacciNTerm(19);
    

    cout << endl;
    return 0;
}