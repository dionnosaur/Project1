#include <iostream>
using namespace std;
 
class compsci2
{ 
public: 
    int a, b;
         
        // Default Constructor
    compsci2()
    {
        a = 10;
        b = 20;
    }
};
 
int main()
{
        // Default constructor called automatically
        // when the object is created
    compsci2 object;
    cout << "a: "<< object.a << endl << "b: "<< object.b;
    return 1;
}
