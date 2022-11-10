

#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
   int z;
   cin >> x;
   cin >> y;

    cout << "Before swapping x:"<< x << endl;
    cout << "Before swapping y:"<< y << endl;

    z = x;
    x = y;
    y = z;
    cout << "After Swapping x:"<< x << endl;
    cout << "After swapping y:" << y << endl;
    return 0;
}

