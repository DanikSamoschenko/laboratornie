#include <iostream>
using namespace std;


int main()
{
    int n;
    
    cout << "Введите n: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "n > 0!" << endl;
    }
    
    else{
        
        int count = 0;
        while (n > 0){
            
            if ((n % 10) % 2 == 0){
                count++;
            }
            n /= 10;
        }
        cout << "Ответ: " << count << endl;
    }
    return 0;
}


