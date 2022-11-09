#include "iostream"
// we use template to reduce code as here T is variable T fun can be return type of function it can be int,char,double etc
// T i , Tj  here T menas data-type of i and j it can update internally it can int , char , etc 
//very limited languages has this fetaures 
// function overloading can be acheive 
using namespace std; 

template <typename T>
T fun (T i , T j)
{
	return i+j;
	
	}
	
		
main(){
	
	cout<<fun(4,5)<<endl;    
	// when we call the fun internally it treated as
	/* 
	int fun (int i, int j){
        
        return i + j ;

    }
    */
	cout<<fun(4.2,5.3)<<endl;
	// when we call the fun internally it treated as
	/* 
	double fun (double i, double j){
        
        return i + j ;

    }
    */
	
	cout<<fun('A','B');
	// when we call the fun internally it treated as
	/* 
	char fun (char i, char j){
        
        return i + j ;

    }
    */
	
	
}
