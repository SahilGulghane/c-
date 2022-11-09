#include "iostream"
using namespace std;
// call by address it means x = 2 and y = 3 
//we get there address and create an pointer pointing to x and y  ie i and j
//as they pointing to address we can physically go in respective address and change the value  
void swap(int* i , int* j){
	int temp ;
    temp = *i;
    *i = *j;
    *j =temp;
    cout<<i<<endl;
}
main(){
	int x =2;
	int y=3;
	swap(&x , &y);
	cout<<&x<<endl;
	cout<<x<<endl<<y;
}
