#include<iostream>
#include<cstdlib>
#include<math.h>
#include<ctime>
#include<conio.h>
using namespace std;
double max( double, double );
double problem1(double num){
	return round(num);
	
}

void problem2(){
	int uniques[] = {0,0,0,0,0,0,0,0,0,0};
	int num,i;
	int min = 1;
	int max = 20;
	srand( (unsigned)time( NULL )); 
	for(int i =0; i<10; i++){
		num = min + (rand() % (max - min + 1));
		for(int j=0; j<10; j++){
			if(num == uniques[j]){
				num = min + (rand() % (max - min + 1));
			}
			else{
				uniques[i] = num;
			}
		}
	}
	cout<<"\nUnique numbers: ";
	for(int i=0; i<10; i++){
		cout<< uniques[i]<<" ";
	}
 }
 
 double asq(double);
 double atri(double,double);
 double acircle(double);
 double arec(double,double);
 void linechar(char,int);
 void problem3(){
 	int choice;
 	double area;
 	char ans;
 	do{
 		cout<<endl;
		linechar('*',20);
		cout<<"MENU"<<endl;
		linechar('*',20);
		cout<<"[1] Area of square \n";
		cout<<"[2] Area of rectangle \n";
		cout<<"[3] Area of triangle \n";
		cout<<"[4] Area of circle \n";
		cout<<"[5] Exit \n";
		linechar('*',20);
		cout<<"Enter your choice: ";
		cin>>choice;
	switch(choice){
		case 1:
			double side;
			cout<<"Enter side of a square: ";
			cin>>side;
			area=asq(side);
			break;
		case 2:
			double length,width;
			cout<<"Enter a length and width: "<<endl;
			cin>>length>>width;
			area=arec(length,width);
			break;
		case 3:
			double base,height;
			cout<<"Enter a base and height: "<<endl;
			cin>>base>>height;
			area=atri(base,height);
			break;
		case 4: 
			double radius;
			cout<<"Enter radius: ";
			cin>>radius;
			area=acircle(radius);
			break;
		case 5:
			exit(1);
		default:
			cout<<"\nInvalid";
			break;
	}
	cout<<"The area is: "<<area;
	cout<<"\nTry again (Y/N)";
	cin>>ans;
}
	while (ans=='Y' || ans=='y');
	cout<<"Thank you!";
}
int call_by_value(int n){
	if(n==1)
		return 1;
	else
		 	return n*call_by_value(n-1);
}
double max( double x, double y){
    double max = x;
    if ( y > max )    
        max = y;
  	else 
  		max = x;
return max;      
}

main(){
	
	double problem1(double num); //problem1
	double num;
	cout<<"\nEnter a number to be round off: ";
	cin>>num;
	cout<<"Round off value: "<<round(num)<<endl;
	
	problem2();				//problem2
	problem3();				//problem3

	int call_by_value(int n);	//problem4
	int n;
	cout<<"\n\nEnter a number: ";
	cin >> n;
	cout<<"The factorial of "<<n<<" is: "<<call_by_value(n);
	cout<<endl;
	
	double max(double x,double y);{ //problem 5
	double num1;
    double num2;
    cout << "\nEnter two numbers: ";
    cin >> num1 >> num2;
    cout << "\nGreatest number is: "  
	 << max( num1, num2)<< endl;
}
	return 0;
}

void linechar(char a,int b){
	int i;
	for(i=0;i<b;i++)
		cout<<a;
		cout<<endl;
}
double asq(double side){
	return side*side;
}
double arec(double length,double width){
	return length*width;
}
double atri(double base,double height){
	return (base*height)/2;
}
double acircle(double radius){
	return 2*3.14*radius;
}
