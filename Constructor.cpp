/* constructor is function which called by default when object created 


parametriz constructor (which takes argument)

non parametriz constructor ( which does not take argument )

*/

#include "iostream"
using namespace std;

class Info{
	
	public:
		int phone_no;
		int age;
	
	Info(int a , int b){
		phone_no =a ;
		age = b;
		cout<<"phone no is:"<<phone_no<<endl;
		cout<<"age is :"<<age<<endl;
	}	
};

main(){
	
	Info W(); // object call by-default constructor... Info W;
	Info I(44,5); // object call updated constructor...
	
}  
