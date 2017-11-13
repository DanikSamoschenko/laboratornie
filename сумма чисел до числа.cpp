
#include <iostream>
using namespace std;

int main(){
    
    int sum = 0;
    int x;
    
    cout << "enter a number: ";
    cin >> x;
    
    for (int i = 1; i <= x; i++) {
        sum = sum + i;
    }
    
    cout << "answer " << sum << endl;
    
    return 0;
}
