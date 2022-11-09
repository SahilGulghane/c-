#include "iostream"

using namespace std;
// call by value it means we are create new variable here swap activation record has i and j as var 
// were as x and y  are part of main 
//as we pass x =i and y = j  we recived and we swap i and j in activation record of swap function as function execute completly this var get delete 
//hence x and y not swap 
void swap(int i ,int j)
{
	int temp ;
	temp = i;
	i = j;
	j = temp;
	// variables are swap in this function only 
	cout<<i<<endl<<j<<endl;
	
	
}
main(){
	int x =3 ;
	int y = 19;
	swap(x,y);
	cout<<x<<endl<<y;
	
	
}
