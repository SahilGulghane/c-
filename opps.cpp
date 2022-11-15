#include"iostream"

using namespace std;

class Info{
	// attributes , data-members are private we can not set or get it 
	int age;
	int phoneno;
	// where as setter and getter are public acess modifier  setter (mutator) ,, getter(accessor) we can achieve validation of data 
	public:
		void setter(int a){
			if(a >=0 ){
				age = a;
			}
			else{
				cout<<"invalid age"<<endl;
			}
		}
		
		void getter(){
			cout<<age<<endl;
		}
};

    main(){
    	//instance create of class Info --- instanstation 
    	Info sahil;
//    	sahil.age = 54;  	C:\Users\sahil\Desktop\c++ project\opps.cpp	[Error] 'int Info::age' is private
    	sahil.setter(4);
    	sahil.getter();
    	
	}
