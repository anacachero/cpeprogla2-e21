#include <iostream>
using namespace std;

struct Name{
       char lastName[30];
       char firstName[30];
};

struct Student{
       int id,day,month,year,qt;
       Name name;
       double items[3],price;   
	   string idname;    
};

void newLine();

int main(){
    Student stud;
    cout << "Enter student records: \n";
    cout << "Contact No: ";
    cin >> stud.id;
    newLine();
    cout << "First Name: ";
    cin.getline(stud.name.firstName, 29);
    cout << "Last Name: ";
    cin.getline(stud.name.lastName, 29);
    cout<<"Order Date:"<<endl;
    cout << "Day: ";
    cin >> stud.day;
	newLine();
	cout << "Month: ";
    cin >> stud.month;
	newLine();
	cout << "Year: ";
    cin >> stud.year;
	newLine();
    for(int i=0; i<3; i++){
            cout << "ID:"<<i+1<<endl; 
            cout<<"Name: ";
            cin>> stud.idname;
            cout<<"Price: ";
            cin>> stud.price;
            cout<<"Quantity: ";
            cin>>stud.qt;
    }
    
    cout << "\n\n";
    cout << "CUSTOMER INFORMATION\n";
    cout << "First Name: " << stud.name.firstName << endl;
    cout << "Last Name: " << stud.name.lastName << endl;
     cout << "Contact No: " << stud.id << endl;
    for(int i=0; i<3; i++){
            cout << "ID: "<< i+1<<endl;        
            cout <<"Name:"<<stud.idname<<endl;
            cout<<"Price:"<<stud.price<<endl;
            cout<<"Quantity:"<<stud.qt;
    }
    
    system("pause > 0");
    return 0;   
}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
