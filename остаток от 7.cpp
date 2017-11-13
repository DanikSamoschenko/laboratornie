#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 87; i++)
    {
        if (i % 7 == 1 || i % 7 == 2 || i % 7 == 5){
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}


