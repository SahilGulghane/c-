#include "iostream"
// call by reference here activation record of swap not created 
// swap function is considerd extended part of main function
//address of i and y is same 
using namespace std;

void swap(int& i , int& j)
{
	int temp ;
	temp = i;
	i = j;
	j = temp;

	
	
	
}
main(){
	int x =34 ;
	int y = 19;
	swap(x,y);
	cout<<x<<endl<<y;
	
	
}
