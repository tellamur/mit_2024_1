#include <iostream>

using namespace std;

void fib(int n){ //iterative way to create the Fibonacci sequence that starts from 0, 1,...
    int current_element = 1; int previous_element = 1;
    if (n > 1) {
        cout << "0"<<"\n"<< "1"<<"\n";
        for (int counter = 2; counter < n; ++counter){
            cout << current_element << "\n";
            current_element +=previous_element;
            previous_element = current_element - previous_element;
        }
    }
    else cout<<"0";
}

int main(){
    int n; 
    cout << "Enter n: "; cin >> n;
    fib(n);
}
