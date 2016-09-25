#include <iostream>
#include <iomanip>
using namespace std;

double sum,total;

void problem1(){
struct Name{
       char fullName[60];
};

struct Student{
       int id;
       Name name;
       double grade[3];      
};

void newLine();
    Student stud;
    double sum;
    cout << "Enter student records: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "Name: ";
    cin.getline(stud.name.fullName, 59);
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": ";
            cin >> stud.grade[i]; 
	sum+=stud.grade[i];     
	
    }
    
    cout << "\n\n";
    cout << "Display student records\n";
    cout << "ID: " << stud.id << endl;
    cout << "Name: " << stud.name.fullName << endl;
      
	sum=sum/3; 
    cout<< "Grade: "<<sum<<endl;
    sum*0;
    if(sum < 75)
    	cout << "Remarks: FAILED";
    else
    	cout << "Remarks: PASSED";
    cout<<endl;
}
void problem2(){
	struct record{
	int id;
	char name[50];
	struct Grade{
		float quiz;
	};
 Grade grade[3];
};

void newLine();

	record stud[5];
	cout<<endl;
	cout << "Enter 5 Student<s> Record" << endl;
	for (int i=0; i<5; i++){
		cout << "\nStudent " << (i+1) << endl;
		cout << "ID: ";
		cin >> stud[i].id;
		newLine();
		cout << "Name: ";
		cin.getline(stud[i].name, 49);
		cout << "Enter 3 quizze(s): ";
		for(int j=0;j<3;j++){	
			cin >> stud[i].grade[j].quiz;	
		}
}
	cout << setw(5) << "No."
		 << setw(15) << "Student No"
	 	 << setw(20) << "Name"
		 << setw(10) << "Grade"
		 << setw(10) << "Remark";
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	
	for(int i=0; i<5; i++){
		sum=0;
		for(int j=0;j<3;j++){
		sum+=stud[i].grade[j].quiz;
		}
		cout << endl;
		cout << setw(5) << i+1
			 << setw(15) << stud[i].id
			 << setw(20) <<stud[i].name
		 	 << setw(10)<< sum/3 
			 << setw(10);
		if( sum/3>=75 ){
			cout << "Passed";
			}
			else{
			cout << "Failed";
			}
		}
		cout << endl;

}
void problem3(){
	struct Customer{
		int no;
	struct Name{
		char firstName[20];
		char lastName[20];
	}name;
	
	struct Order{
		int day,month,year,qt;
		struct Item{
			int ID;
			char idname[50];
			int price;
		};
	Item item[3];
	}order;
	
};

void newLine();

	Customer stud[3];
	for (int n=0;n<3;n++){
		cout << "CUSTOMER INFORMATION " << n+1 << endl;
		cout << "First Name: ";
		cin.getline(stud[n].name.firstName,29);
		cout << "Last Name: ";
		cin.getline(stud[n].name.lastName,29);
		cout<< "Contact No:";
		cin >> stud[n].no;
		cout << "ORDER DATE: "<<endl;
		cout << "Day: ";
		cin >> stud[n].order.day;
		cout << "Month: ";
		cin >> stud[n].order.month;
		cout << "Year: ";
		cin >> stud[n].order.year;
		cout << "\nEnter 3 items" <<endl;
		for (int i=0;i<3;i++){
		    cout << "ID: "<<i+1<<endl;
		    newLine();
    	    cout << "Name: ";
    		cin.getline(stud[n].order.item[i].idname,29);
    		cout << "Price: ";
    		cin >> stud[n].order.item[i].price;
    		cout << "Quantity: ";
    		cin >> stud[n].order.qt;
    		cout << endl;
		}
		newLine();
}
	cout<< setw(10) << "SUMMARY REPORT" <<endl
    	<< setw(5) << "#" 
    	<< setw(15) << "Customer name"
    	<< setw(15) << "Order date"
    	<< setw(10) << "Items"
    	<< setw(15) << "Price"
    	<< setw(15) << "Quantity"<<endl;
    	
    cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
		
	for (int n=0;n<3;n++){

		cout << setw(5)<< n+1;
		cout << setw(10) <<stud[n].name.lastName<<","<<stud[n].name.firstName;  
		cout << setw(5) <<stud[n].order.day <<"/" << stud[n].order.month << "/"<< stud[n].order.year;
		
    	for (int i=0;i<3;i++){
    		cout<<setw(10) << stud[n].order.item[i].idname;
			cout<< setw(15) << stud[n].order.item[i].price;
			cout<< setw(15) << stud[n].order.qt << endl;
    		total= stud[n].order.item[i].price*stud[n].order.qt;
		}	
		total+=total;
		cout << setw(30) << "TOTAL PRICE: " << setw(10)<<total << endl;
	}
}
main(){
	problem1();
	problem2();
	problem3();

return 0;
}
	
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
