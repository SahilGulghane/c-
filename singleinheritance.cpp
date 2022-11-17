#include "iostream"

using namespace std;

class Parent {
	
	public :
		int phone;
		int age;
	Parent(){
		cout<<"parent con "<<endl;
	}	
		
};
// single-inheritance child inherit form single child 
class Son:public Parent{
	
	public :
		int id;
		char name[10];
	Son(){
		cout<<"child con "<<endl;
	}	
};
main(){
	Parent p ; //call parent constructor only
	cout<<endl;
	Son s; //call both parent as well as son constructor
	s.phone = 4512;
	s.id = 12; // child object can acess parent attributes as well as methodes 
	
}
