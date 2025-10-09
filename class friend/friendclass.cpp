#include <iostream>
using namespace std;

class Two; // 

class One
{
    friend class Two;  // 
    int a = 24;
public:
    void show()
    {
        cout << "This is class One" << endl;
    }
};


class Two
{
    friend class One; 

public:
    void show2()
    {
        cout << "And this is class Two" << endl;
    }

    void accessOnePrivate(One &obj) 
    {
        cout << "Accessing private data of class One from class Two: " << obj.a << endl;
    }
};

int main()
{
    One obj1;
    Two obj2;

    obj1.show();
    obj2.show2();

    
    obj2.accessOnePrivate(obj1);

    return 0;
}