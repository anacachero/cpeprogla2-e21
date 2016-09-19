#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int	x,y,i,diff1,diff2,diff3;

	cout<<"Enter number of Hashmat's and the opponent's army\n";
	 
	 for(i=0;i<1;i++){
	 	if(x<=2^32 && y<=2^32)
	 	{	
	 		cin>>x>>y;
	 		diff1=x-y;
	 		cin>>x>>y;
	 		diff2=x-y;
	 		cin>>x>>y;
	 		diff3=x-y;
	 }
		 else{
			cout<<"End of File";
		 	break;
		 }
		 	
		cout<<"The difference between Hashmat's and the opponets's army\n";
		cout<<abs(diff1)<<endl;
		cout<<abs(diff2)<<endl;
		cout<<abs(diff3); 
		
		
		 }
		 
return 0;		 
	}

		 

	

	


	
