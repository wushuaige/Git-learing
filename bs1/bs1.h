#include <iostream>
#include <string>
using std::string;
using std::cout;



class person{
private:
	string name;

public:
	
	person(string name){
		this->name = name;

	}
	void says(string a){
		cout<<name<<"say:"<<a<<endl;
	
	}


};
