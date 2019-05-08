#include <iostream>
#include <string>

class person{
private:
	string name;

public:
	
	person(string name){
		this->name = name;

	}
	void say(string a){
		cout<<name<<"say:"<<a<<endl;
	
	}


};
