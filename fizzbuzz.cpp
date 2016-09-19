#include<iostream>
using namespace std;

int main(){
	
	int x;
	
	for(x=1;x<101;x++){
		
		if(x%3==0 && x%5==0)
			cout<<"FizzBuzz"<<endl;
		else if(x%5==0)
			cout<<"BUZZ"<<endl;
		else if(x%3==0)
			cout<<"FIZZ"<<endl;
		else 
		cout<<x<<endl;
	}
	
	
	
	return 0;
}

