#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BaseUser {
public:
	void SetLastName(string lName) {
		lastName = lName;
	};
	virtual void PrintItem(){
		cout << "Player Last Name: ";
		cout << lastName;
	};
protected:
	string lastName;
};



int main()
{
	
return 0;
}
